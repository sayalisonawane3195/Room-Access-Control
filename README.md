# Room-Access-Control

**Description**-

System that monitors the number of people present in a room. A photoelectric barrier at the door should recognize a person entering the room. If a maximum number of people is exceeded, a step-by-step notification system should inform about the violation of this rule. First, a small notification in the room is sufficient. If there are still too many people in the room after some time, the notification level should be increased (e.g. louder alarm sound, email notification to a responsible person, …).

**SOlution**-
There are 2 pair of sensors(combination of foto sensor and Laser emitter) 1 for sensing the incoming people and 1 for sensing outgoing people from room.
When people passes through the first sensor then count goes on increasing untill 6 without any notification and as soon as count reaches to 7, buzzer will sound with low frequency. Even after count 9 people are passing by then, buzzer will sound with more frequency.
When people pass through second sensor that is sensing outgoing people count goes on decreasing and thus lowering the buzzer sound with same frequency as incoming. And as soon as count reaches to 6 buzzer will stop sounding.


**Hardware needed-**<br>
-Arduino Uno <br>
-Piezo buzzers <br>
-220 ohm resistor <br>
-470 ohm resistor <br>
-USB Cable A to B <br>
-Photo Sensor *2 <br>
-Laser Emitter *2 <br>
-BreadBoard <br>
-Jumper Wires Pack - M/M <br>
-Jumper Wires Pack - M/F <br>


**Circuit Diagram-**<br>![Room_Access_Control](https://user-images.githubusercontent.com/103532299/166162085-637995b9-224c-46b8-8c7f-a3b35429d540.jpeg)


