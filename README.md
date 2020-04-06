# AMBU-bag-powered-by-3D-printer.-COVID-19
we will use a 3D printer to activate the manual artificial resuscitator better known as AMBU BAG.   This allows us to use a mechanism we have available and focus on developing code, software, and mounting or   manufacturing sensors, valves, and filters for scalable performance. There are several options for performing this task. Directly from programs that control the printer such as   Replicator, pronterface, etc. It is worth saying that From the PC you can also go to micropython, since pronterface is based on this software. However, in order to expand the possibilities of many and improve the software, we will use an arduino (Italy!).  This also allows software developers to work their code on something practical, without dwelling on the   mechanical part.
The list of materials are:
1. Any Arduino
2. A4988 stepper motor driver or similar (if a more powerful motor is to be used, it could be the driver for a 

CNC, say the TB6600)
3. 3D printer
4. AMBU BAG
5. Any DC Voltage Source (12-20V, 2A approx.)
6. cables and connectors.

the idea is to use the linear mechanism of the Z axis to take control of it from arduino.
Although the printer itself possibly has an arduino and an A4988 Driver inside. We will use others to avoid 

intervening the machine as little as possible so that we can use it normally if necessary.

the circuit is this and the software is this and can be found in the description link on GitHub and 

Mecaleptonics.com
cismaGitHub20

HARDWARE Specifications
1. arduino PRO MINI
2. A4988 driver programmed for a NEMA 17 to 1.5 A motor. It is highly recommended to fit a heat sink, even a 

supplementary one to the one that comes, hopefully with a fan.

The motor could also get hot and another heatsink and fan can also be installed. Remember that we have to ensure 

continuous work performance.

3. We use a 3D printer makerBot Thing-O-Matic which has a Z-axis screw motor.
If your 3D printer has two screws and two Z axis motors, just duplicate another A4988 driver circuit and connect 

them to the pins indicated in the code and in the images.
4. AMBU BAG. 65-125 mm compression. Approximate travel 50 mm
5. I used a desktop PC source where I got 5 volts for arduino and 12 volts for driver
6. If the 4 motor cables are crossed, it is easy to change them to work properly and in the desired direction of 

rotation.


SOFTWARE Specifications

The initial code is very simple, it only has a STAR-STOP button, UP and DOWN button.

The basic variables would be:

Tidal TV volume (in our case it would be the Z axis travel)
breaths per minute, which ranges from 10 to 30 per minute
inspiratory time / expiration time ratio, ranging from 1 to 2

Those variables are marked with comments in English in the arduino code.
Little by little, the code will be updated by those of us who want to collaborate. Adding for example, a 20X4 LCD 

screen, Buttons or keyboard for the variables, BMP280 pressure sensor, flow sensor, control and display from 

smart phone or PC, etc.

In future videos I will be using a more powerful motorized CNC linear machine mechanism and options ranging from 

scrap metal to a machine based on minimum standards required by the UK Department of Health for reference and 

published documents from the University of Florida (link in description).

We are all soldiers in this war that came home.

Even without this pandemic, it is desirable to have a resuscitator available because you don't know when you 

might need it.
