
/* 
 *  blink is an easy test to make sure that the information is actually going from computer to board. 
 *  also -- hello world.
 */
 
#define LED 0   //built in LED

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  Serial.println("blink");
  
}


