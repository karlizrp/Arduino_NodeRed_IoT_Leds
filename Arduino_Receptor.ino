int led1= 9; 
int led2= 10; 
int led3= 11; 
int led4= 12;
bool state1 = false;
bool state2 = false;
bool state3 = false;
bool state4 = false;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  estado();
  Serial.begin(9600);
}
void loop() {
  if (Serial.available() > 0){
  int reci = Serial.read();
  switch((char)reci){
      case '1':
        state1 = !state1;
        digitalWrite(led1, state1 ? HIGH : LOW);
        estado();
        break;
       case '2':
        state2 = !state2;
        digitalWrite(led2,state2 ? HIGH : LOW);
        estado();
        break;
      case '3':
        state3 = !state3;
        digitalWrite(led3, state3 ? HIGH : LOW);
        estado();
        break;
      case '4':
        state4 = !state4;
        digitalWrite(led4, state4 ? HIGH : LOW);
        estado();
        break;
      default:
      break;
    }
  }
}
void estado(){
    
     Serial.print(state1 ? 1 : 0);
     Serial.print(",");
     Serial.print(state2 ? 1 : 0);
     Serial.print(",");
     Serial.print(state3 ? 1 : 0);
     Serial.print(",");
     Serial.print(state4 ? 1 : 0); 
     Serial.println(); 
}
