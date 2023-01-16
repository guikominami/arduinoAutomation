Project to connect with Arduino via bluetooth. 

- Upload the .ino code into an Arduino.
- Install the .apk in an Android device.
- Connect things in the ports 2 to 13 and the bluetooth HC05 or HC06 to Arduino and turn it on.
- Pair your Android bluetooth to Arduino bluetooth. Password: 1234.
- Open the "Arduino Automation" app and click "connect" button.
- If the connection is successful, the button will turn to green.
- Press the buttons Ports 2 to 13.


Some limitations in the MIT App inventor:
- If Arduino turns it off, the app don't immediately show an error. It will happen in the next time you press a button.
- You have to press the buttons with a 2 seconds interval. If you press 2 buttons quickly, Arduino will not recognize which command has been sent. If it happens, you have to turn off the buttons and press one at time.
