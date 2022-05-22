#include <IRremote.h>
 
const int RECV_PIN = 9;
 
IRrecv irrecv(RECV_PIN);
decode_results results;
 
void setup()
{
   Serial.begin(9600);
   irrecv.enableIRIn();
}
 
void loop()
{
   if (irrecv.decode(&results))
   {
      if (results.value == 0xFFA25D){
      Serial.println('1');
      }
      if (results.value == 0xFF629D){
      Serial.println('2');
      }
      if (results.value == 0xFFE21D){
      Serial.println(3);
      }
      if (results.value == 0xFF22DD){
      Serial.println(4);
      }
      if (results.value == 0xFF02FD){
      Serial.println(5);
      }
      if (results.value == 0xFFC23D){
      Serial.println(6);
      }
      if (results.value == 0xFFE01F){
      Serial.println(7);
      }
      if (results.value == 0xFFA857){
      Serial.println(8);
      }
      if (results.value == 0xFF906F){
      Serial.println(9);
      }
      if (results.value == 0xFF9867){
      Serial.println(0);
      }
      irrecv.resume();
   }
}
