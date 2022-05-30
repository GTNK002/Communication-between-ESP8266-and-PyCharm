''' Please check out my Youtube channel for step by step process
https://www.youtube.com/channel/UCTM5Kv1_eWFYq74OKYLDMWw
librery required pip install pyserial '''

import serial

import time

serialcommunication = serial.Serial('COM3', 9600)  # use your com port

serialcommunication.timeout = 1

while True:

    inputvar = input('Enter the command: ').strip()

    if inputvar == 'stop':
        print('stopped')
        break

    serialcommunication.write(inputvar.encode())

    time.sleep(0.5)

    print(serialcommunication.readline().decode('utf-8'))

serialcommunication.close()
