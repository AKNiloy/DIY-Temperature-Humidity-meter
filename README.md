# DIY-Temperature-Humidity-meter
###Easy temperature & humidity meter you can create at home
So this time got myself a nice little temperature & humidity sensor named DHT11. Costed around 2$. It has 4 pins: VCC, DATA,NCC & GND. Hooked up the vcc & gnd with my arduino nano's vcc & gnd & data to digital pin. A 10k resistor was added from the data pin to the vcc of arduino in order to keep the data line high & to enable communication between the sensor & the arduino board.

You need the DHT library and Liquid crystal library. 

### <a href='http://playground.arduino.cc/Main/DHTLib'>DHT Sensors Library</a>

Using the DHT library & uploading the example code you can see the readings of the sensor in the serial monitor.
I decided to use a 16 x 02 LCD display to display the readings of the sensor. Its very cheap, around 2$ in my country.

### LCD 16x02 Connection:
* The LCD has 16 pins and the first one from left to right is the Ground (GND) pin <br>
* The second pin is the VCC which you connect the +5V pin on the breadboard. <br>
* Next is the Vo pin on which you can attach a potentiometer for the contrast of the display <br>
* The RS pin ill be connected to the digital 1 pin of the Arduino. <br>
* The RW pin will be connected to the GND pin of the breadboard. <br>
* The E pin will be connected to the digital 3 pin of the Arduino. <br>
* The D4 pin - Digital 4 of the Arduino. <br>
* The D5 pin will be connected to the digital 5 pin of the Arduino. <br>
* The D6 pin will be connected to the digital 6 pin of the Arduino. <br>
* The D7 pin will be connected to the digital 7 pin of the Arduino. <br>
* The A (anode) pin will be connected to the +5V pin of the breadboard. <br>
* The K (cathode) pin will be connected to the GND pin of the breadboard. <br>
* The potentiometer's other pins will be connected to the +5V and GND pin of the breadboard. <br>

![](https://github.com/AKNiloy/DIY-Temperature-Humidity-meter/blob/master/temP%20%26%20hum.jpg)
