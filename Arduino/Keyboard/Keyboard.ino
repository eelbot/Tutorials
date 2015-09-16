/*
 * In this program we will create a keyboard using input
 * and output
 */

// Below we use the octothorpe, as well as the word "define".
// When we do this, we are saying that we want key_1 to be
// equal to 5. This will be the same throughout our entire
// program.
#define piezo 8
#define key1 2
#define key2 3
#define key3 4
#define key4 5

// Remember that below is the code that runs only once,
// to set everything up.
void setup() {
  // First, set up the piezo buzzer as an output
  pinMode(piezo, OUTPUT);

  // Next, we set up all the keys as inputs. INPUT_PULLUP
  // creates a pullup that is normally HIGH. Therefore,
  // we will be checking to see if the pins go LOW
  pinMode(key1, INPUT_PULLUP);
  pinMode(key2, INPUT_PULLUP);
  pinMode(key3, INPUT_PULLUP);
  pinMode(key4, INPUT_PULLUP);
}

void loop() {
  // Below we use an if statement. This statement is very straight 
  // forward! We simply say "If key4 is LOW, do something. If it 
  // isn't, check if key3 is LOW, and do something different.
  // Then check key2, and key1." Finally, the "else" part 
  // says "If no keys are pressed, then here is what to do.
  if(digitalRead(key4) == LOW){
    tone(piezo, 523);
  }
  else if(digitalRead(key3) == LOW){
    tone(piezo, 659);
  }
  else if(digitalRead(key2) == LOW){
    tone(piezo, 784);
  }
  else if(digitalRead(key1) == LOW){
    tone(piezo, 1047);
  }
  else{
    noTone(piezo);
  }
  // The tone function is used to make a specific frequency from
  // our keyboard. When creating projects for the Arduino, it
  // is essential to know how to use the documentation. 
  // Try and figure out what tone() and noTone() do, and what
  // their parameters are by visiting www.arduino.cc and
  // searching.
}
