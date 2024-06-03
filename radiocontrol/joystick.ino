const int px = A0; 
const int py = A1; 
const int lderecha = 4; 
const int lizquierda = 5; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lderecha, OUTPUT);
  pinMode(lizquierda, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valuex = analogRead(px);
  int valuey = analogRead(py);

  if (valuex == 0 ){
    digitalWrite(lderecha, LOW); 
    digitalWrite(lizquierda, HIGH); 
  }else if (valuex > 1000){
    digitalWrite(lderecha, HIGH); 
    digitalWrite(lizquierda, LOW); 
  }else{
    digitalWrite(lderecha, LOW); 
    digitalWrite(lizquierda, LOW); 
  }
   Serial.println(valuex);
  delay(1);
}
