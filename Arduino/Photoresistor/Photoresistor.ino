/*
 * In this program, we will read and print the level of ambient 
 * light using an LDR (photoresistor).
 */

 // First we define a value. light_pin is the value of the
 // analog pin to be read. The Arduino automatically knows that
 // we want to use an analog pin when we use analogRead().  
#define light_pin 0

// Next, we create a variable that will hold our light value. 
// Later, we will see the maximum and minimum value of this
// variable.
int light_value = 0;

void setup()
{
    // You cannot output a true analog value from the analog
    // pins, so their default state (when using analogRead()) is
    // as an input. Therefore we do not need to define any pins
    // as input or output.

    // We want to display the data that we are collecting in 
    // a data terminal. The line below sets up a serial 
    // connection to the PC, communicating at 9,600 bits per
    // second.
    Serial.begin(9600);  //Begin serial communcation
}

void loop()
{
    // In the loop of the program, we place the code that we 
    // want to run over and over again.

    // First, we read the light value from the first analog pin 
    // using analogRead(). The Arduino documentation does a very
    // good job of explaining how this function works.
    light_value = analogRead(light_pin); 

    // Next, we print a line using println() to the serial
    // connection we opened before. What are we printing? The 
    // light value!
    Serial.println(light_value);

    // Finally, we wait 10 milliseconds, before starting the loop
    // again.
    delay(10);
   
}

