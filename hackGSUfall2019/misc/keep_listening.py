import socket
import random
import time

port = 50001
host = 'localhost'
flag = b'gsuCTF{temp}'
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((host,port))
server.listen()
transmit_flag = random.randint(0,20)
tragedy_counter = 0
transmission_counter = 0

the_tragedy = [
"Palpatine: Did you ever hear the tragedy of Darth Plagueis The Wise?",
"Anakin: No",
"Palpatine: I thought not. It's not a story the Jedi would tell you. It's a Sith legend. Darth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could use the Force to influence the midichlorians to create life… He had such a knowledge of the dark side, he could even keep the ones he cared about from dying.",
"Anakin: He could actually save people from death?",
"Palpatine: The dark side of the Force is a pathway to many abilities some consider to be unnatural.",
"Anakin: What happened to him?",
"Palpatine: He became so powerful… the only thing he was afraid of was losing his power, which eventually, of course, he did. Unfortunately, he taught his apprentice everything he knew, then his apprentice killed him in his sleep. Ironic. He could save others from death, but not himself.",
"Anakin: Is it possible to learn this power?",
"Palpatine: Not from a Jedi."
]

print(transmit_flag)

while True:
    conn, addr = server.accept()

    while True:
                
        if not (transmission_counter == transmit_flag):
            
            conn.sendall(the_tragedy[tragedy_counter].encode() + b'\n')
            tragedy_counter += 1 

            if tragedy_counter == 8:
                transmission_counter += 1
                tragedy_counter = 0 

        elif transmission_counter == transmit_flag:
            conn.sendall(flag + b'\n')
            transmission_counter = 0
            transmit_flag = random.randint(0,20)
    
        time.sleep(1)
