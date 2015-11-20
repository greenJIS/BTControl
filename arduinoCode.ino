//Arduino Code

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void menu();

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0);
  char val = Serial.read();

  //STOP
  if (val == 's') {
    Serial.println("\tstop");
    menu();
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  //delay(50);

  //forward
  else if (val == 'f') {
    Serial.println("\tforward");
    menu();
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    //delay(3000);
  }

  //RIGHT
  else if (val == 'r') {
    Serial.println("\tright");
    menu();
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    //delay(3000);
  }

  //LEFT
  else if (val == 'l') {
    Serial.println("\tleft");
    menu();
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    //delay(3000);
  }

  //BACKWARD
  else if (val == 'b') {
    Serial.println("\tbackward");
    menu();
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    //delay(3000);
  }
  else {
    Serial.println("\tSorry!!mistake. try again");
  }
}

void menu() {
  Serial.println("l\tfor Left\nr\tfor Right\nf\tfor Forward\nb\tfor Backward\ns\tfor Stop\n\n");
}
