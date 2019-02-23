/*

 The circuit:

  * pushbutton(limit switch) attached to pin 2 from +5V

  * output towards relay is connected to pin 3
  * PIR-1 is connected to pin 4  
  * PIR-2 is connected to pin 5


  * created 2019 by h0oni
*/


int buttonState = 0;


int pir1 = 0;


int flag = 0;


int pir2 = 0;


void setup()

{
  pinMode(2, INPUT);

  pinMode(4, INPUT);

  pinMode(5, INPUT);

  pinMode(3, OUTPUT);
}


void loop()
{

  buttonState = digitalRead(2);

  pir1 = digitalRead(4);

  pir2 = digitalRead(5);

  if (buttonState == HIGH) {

    flag = HIGH;

  }

  if (pir1 == HIGH) {

    flag = HIGH;

  }

  if (pir2 == HIGH) {

    flag = HIGH;

  }

  if (flag == HIGH) {

    digitalWrite(3, HIGH);

    delay(5000); // Wait for 5000 millisecond(s)

  }
 else {

    digitalWrite(3, LOW);

  }

}