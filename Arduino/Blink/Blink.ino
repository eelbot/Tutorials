void setup() {
  // This is the area that you set up your program. This 
  // includes starting things up on the microcontroller,
  // and making sure that your peripherals are working
  // correctly.

  // On the line below, we tell the Arduino to make pin 7
  // OUTPUT. This means we can change the value of
  // the pin between 1 and 0.
  pinMode(7, OUTPUT);
}

void loop() {
  // Once your Arduino is finished preparing from the setup()
  // function above, it runs through the code below over and
  // over forever. 

  // First, we write a 1, or HIGH to pin 7. This turns
  // the LED on
  digitalWrite(7, HIGH);
  
  // Next, we wait 500 milliseconds, or half a second.
  delay(500);

  // Next, we write a LOW, or 0 to pin 7. This turns the 
  // LED off
  digitalWrite(7, LOW);

  // Then we wait another half a second
  delay(500);

  // After this point, our program goes back to the
  // beginning of loop() and starts over. Our LED will
  // blink forever!
}
