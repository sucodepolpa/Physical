int button =0;
void setup() {
  //declara A0 como input
  pinMode(A0, INPUT);
}

void loop() {
  button = digitalRead(A0);
  if(button==HIGH)
  {
      tone(8, 440);
      delay(2600);
      
      noTone(8);
      delay(100);
      
      tone(8, 659);
      delay(500);

      tone(8, 587);
      delay(150);

      tone(8, 523);
      delay(150);

      tone(8, 440);
      delay(2600);

      noTone(8);
      delay(100);

      tone(8, 392);
      delay(700);

      tone(8, 698);
      delay(700); 

      tone(8, 659);
      delay(700);

      tone(8, 523);
      delay(1900);

      noTone(8);
      delay(100);

      tone(8, 698);
      delay(700);

      tone(8, 659);     
      delay(700);

      tone(8, 493);
      delay(2000);

      noTone(8);
      delay(100000);
  }
  else
  {noTone(8);}
}
