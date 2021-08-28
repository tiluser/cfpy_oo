int LED = 13;
int val = 0;
void setup() {
  Serial.begin(9600);
  Serial.flush();
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
 
}
void loop() {
  if (Serial.available() > 0){
    val = char(Serial.read())-'0';
    if(val == 1){
      digitalWrite(LED, HIGH);  
      }
    if(val == 0){
      digitalWrite(LED, LOW);
      }
  }
}
