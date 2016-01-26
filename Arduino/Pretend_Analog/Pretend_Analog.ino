/*
 * In this sketch we create a blinking LED, but instead of 
 * blinking on and off rapidly and sharply, it slowly fades
 * on and off.
 */

// To begin, we set value of the pin that we want the led to
// be connected to. We are using a variable definition, which
// is as valid as the #define statements from previous tutorials.
int led_pin = 9;

void setup() {
  // Much like analogRead(), analogWrite() understands that 
  // we are going to be outputting a value, and so we do
  // not need to specify INPUT or OUTPUT. Therefore, nothing
  // needs to be done in the setup loop.
}

void loop() {
  // Below are several new concepts. Make sure that you
  // understand each concept, as all are essential in progressing
  // further.
  
  // Below we define a for loop. In this case, we are using the
  // variable fadeValue to tell the loop how long it should 
  // continue running for. See below: We set fadeValue equal to 
  // 0. Then, we say "As long as fadeValue is less than or equal
  // to 255, add 5 to fadeValue every loop". Once fadeValue 
  // reaches this value, the loop will stop running and the code
  // will continue to the next block.
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    
    // Inside the loop, we write an analog value to led_pin. The
    // value we are writing is fadeValue
    analogWrite(led_pin, fadeValue);
    
    // We implement a small delay so that the dimming effect can
    // be seen.
    delay(30);
  }

  // Below, we define another loop. However, in this loop we 
  // let fadeValue start at 255, and decrement by 5 until
  // it reaches 0.
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    
    // Again, we set the led_pin analog value equal to fadeValue.
    analogWrite(led_pin, fadeValue);
    
    delay(30);
  }
}
