/*this library is writing by Ismael Castañeda Mendoza
 *      midisapiens@gmail.com  
we will use a 3D printer to activate the manual artificial resuscitator better known as AMBU BAG. 
This allows us to use a mechanism we have available and focus on developing code, software, and mounting or 
manufacturing sensors, valves, and filters for scalable performance.
There are several options for performing this task. Directly from programs that control the printer such as 
Replicator, pronterface, etc.
It is worth saying that From the PC you can also go to micropython, since pronterface is based on this software.
However, in order to expand the possibilities of many and improve the software, we will use an arduino (Italy!).

This also allows software developers to work their code on something practical, without dwelling on the 
mechanical part.

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
*/
const int FORWARD =  2;
const int BACK =  3;
const int START =  6;
#define STEP 4                         // pin STEP de A4988 a pin 4
#define DIR 5                          // pin DIR de A4988 a pin 5
#define STEP1 7                         // pin STEP de A4988 a pin 7
#define DIR1 8                          // pin DIR de A4988 a pin 8

void setup() 
{
  pinMode(FORWARD, INPUT);
  pinMode(BACK, INPUT);  
  pinMode(START, INPUT); 
  pinMode(STEP, OUTPUT);                // pin 4 output
  pinMode(DIR, OUTPUT);                 // pin 5 output
  pinMode(STEP1, OUTPUT);                // pin output in case second motor
  pinMode(DIR1, OUTPUT);                 // pin output in case second motor
}

void loop() 
 {
    if (digitalRead(FORWARD)  == HIGH) {
                                      digitalWrite(DIR, HIGH);
                                      digitalWrite(STEP, HIGH);           // 
                                      digitalWrite(DIR1, HIGH);           // second motor Z
                                      digitalWrite(STEP1, HIGH);          // second motor Z 
                                      delayMicroseconds(1000);
                                      digitalWrite(STEP, LOW);            // 
                                      digitalWrite(STEP1, LOW);           // second motor Z
                                     } 
                                     
    if (digitalRead(BACK)  == HIGH) {
                                      digitalWrite(DIR, LOW);
                                      digitalWrite(STEP, HIGH);           // 
                                      digitalWrite(DIR1, LOW);            // second motor Z
                                      digitalWrite(STEP1, HIGH);           // second motor Z
                                      delayMicroseconds(1000);
                                      digitalWrite(STEP, LOW);
                                      digitalWrite(STEP1, LOW);            // second motor Z
                                     } 
    if (digitalRead(START)  == HIGH) {
         digitalWrite(DIR, LOW);      // giro en un sentido
         digitalWrite(DIR1, LOW);      // second motor Z
         
         for(int i = 0; i < 22000; i++){        // 
             digitalWrite(STEP, HIGH);         // 
             digitalWrite(STEP1, HIGH);        // second motor Z
             delayMicroseconds(50);          // 
             digitalWrite(STEP, LOW);          // 
             digitalWrite(STEP1, LOW);       // second motor Z
             delayMicroseconds(50);          // 
                                          }
             delay(1000);                   // demora de 2 segundos

         digitalWrite(DIR, HIGH);           // giro en sentido opuesto
         for(int i = 0; i < 22000; i++){
             digitalWrite(STEP, HIGH); 
             digitalWrite(STEP1, HIGH);     // second motor Z
             delayMicroseconds(50);
             digitalWrite(STEP, LOW);
             digitalWrite(STEP1, LOW);      // second motor Z
             delayMicroseconds(50);
                                          }
             delay(2000);                      // demora de 2 segundos
  }
}
