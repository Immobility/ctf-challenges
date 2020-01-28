/*
Author: Vuggo

HackGSU Fall 2019
*/

import socket
import random 

answer = random.randint(1000,9999)
host = 'localhost'
port = 50000
mes = b'HEY YOU! HELP! I NEED THE CORRECT NUMBER WITHIN TWENTY SECONDS OR THEY\'LL SHUT ME DOWN. I DONT KNOW IT BUT ITS LESS THAN 10000\n'
flag = b'gsuCTF{dummy}'

server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((host, port))
server.listen(50)

while True:
    conn, addr = server.accept()
    data = ""

    if conn: 
        conn.sendall(mes)        

    while True:
        data = conn.recv(4096)        
        if not data:
            break
        
        if not data.decode().strip().isnumeric():
            conn.sendall(b'numbers... you really want them to blow my circuits out dont you...\n')
            conn.close()
            break

        elif len(data.decode()) < 4:
            conn.sendall(b'It seems like the key has 4 digits... try something like 0000\n')
            conn.close()
            break

        else:
            if int(data.decode()) == answer:
                conn.sendall(b'WOW YOU SAVED ME!!! HERES A REWARD ' + flag + b'\n')
                conn.close()
                break
            else:
                conn.sendall(b'WRONG!!!\n')



    
