# doorunlockusingobject
These project is concern about the automatic door opening and closing system .
These systems  are commonly found in hotels, super markets etc.
The aim of project is to sense the object that are approaching the door and open automatically.

There are various modules are used :
1.	Ultrasonic sensor : ultrasonic sensor emits the sort and high frequency signal. These signals propagate in the air. If some objects comes in its path , it will bounce back or reflect back to the module.The ultrasonic sensor consist of two parts that was echo and trigger. Echo act as a emitter that means it get the input and Trigger act as a detector that means it give the output to echo.
2.	Arduino UNO : The Arduino UNO is  a microcontroller. It as a number of sockets that can be wired up to external electronics such as sensor, relay etc. Arduino control all the device that are connected to it.  They can powered either through USBconnection from the computer or from a 9 volt battery.
3.	Servo motor : servo motor is an electrical device which can push or rotate an object at particular position.

Working :
There are two module in that system first module detect the object at a particular distance by using ultrasonic sensor and second module is a servo motor which are using for open and close a door.When the person or an object approaching the door, the ultrasonic sensor detect the object and send the signal to arduino microcontroller and microcontroller control the servo motor to open the door . the door stay open as long as the door way is not clear and once the door way is clear,the ultrasonic sensor send another signal to the microcontroller to close the door until another object is detected.
