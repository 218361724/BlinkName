/*
  Blink Name

  Signals 'RAMI' in Morse code via turning the LED on and off.

  Reference used for translation: https://morsecode.world/international/morse.html
*/

const pin_t LED_BUILTIN = D7;
const int dotLength = 500;
const int dashLength = 3 * dotLength;
const int subLetterGapLength = dotLength;
const int letterGapLength = dotLength * 3;
const int wordGapLength = dotLength * 7;

SYSTEM_THREAD(ENABLED);

void setup() {
  // Initialise LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // -- Signal 'R': dot dash dot
  Particle.publish("r-morse");
  // Dot 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  // Dash 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  // Dot 2
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotLength);
  
  // Delay between letters
  digitalWrite(LED_BUILTIN, LOW);
  delay(letterGapLength);
 
  // -- Signal 'A': dot dash
  Particle.publish("a-morse");
  // Dot 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  // Dash 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);

  // -- Signal 'M': dash dash
  Particle.publish("m-morse");
  // Dash 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  // Dash 2
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dashLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  
  // -- Signal 'I': dot dot
  Particle.publish("i-morse");
  // Dot 1
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  // Dot 2
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dotLength);
  // Delay between letter parts
  digitalWrite(LED_BUILTIN, LOW);
  delay(subLetterGapLength);
  
  // Delay between words
  digitalWrite(LED_BUILTIN, LOW);
  delay(wordGapLength);
}

