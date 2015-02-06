void shortBlink() {
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(300);
}

void longBlink() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(300);
}

void blip() {
  digitalWrite(13, HIGH);
  delay(25);
  digitalWrite(13, LOW);
  delay(500);
}

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int character = Serial.read();
  if ((character < 91 ) && (character > 64)) {
    character += 32;
  }

  if (character > 0) {
    switch (character) {
    case 'a':
      shortBlink();
      longBlink();
      break;
    case 'b':
      longBlink();
      shortBlink();
      shortBlink();
      shortBlink();
      break;
    case 'c':
      longBlink();
      shortBlink();
      longBlink();
      shortBlink();
      break;
    case 'd':
      longBlink();
      shortBlink();
      shortBlink();
      break;
    case 'e':
      shortBlink();
      break;
    case 'f':
      shortBlink();
      shortBlink();
      longBlink();
      shortBlink();
      break;
    case 'g':
      longBlink();
      longBlink();
      shortBlink();
      break;
    case 'h':
      shortBlink();
      shortBlink();
      shortBlink();
      shortBlink();
      break;
    case 'i':
      shortBlink();
      shortBlink();
      break;
    case 'j':
      shortBlink();
      longBlink();
      longBlink();
      longBlink();
      break;
    case 'k':
      longBlink();
      shortBlink();
      longBlink();
      break;
    case 'l':
      shortBlink();
      longBlink();
      shortBlink();
      shortBlink();
      break;
    case 'm':
      longBlink();
      longBlink();
      break;
    case 'n':
      longBlink();
      shortBlink();
      break;
    case 'o':
      longBlink();
      longBlink();
      longBlink();
      break;
    case 'p':
      shortBlink();
      longBlink();
      longBlink();
      shortBlink();
      break;
    case 'q':
      longBlink();
      longBlink();
      shortBlink();
      longBlink();
      break;
    case 'r':
      shortBlink();
      longBlink();
      shortBlink();
      break;
    case 's':
      shortBlink();
      shortBlink();
      shortBlink();
      break;
    case 't':
      longBlink();
      break;
    case 'u':
      shortBlink();
      shortBlink();
      longBlink();
      break;
    case 'v':
      shortBlink();
      shortBlink();
      shortBlink();
      longBlink();
      break;
    case 'w':
      shortBlink();
      longBlink();
      longBlink();
      break;
    case 'x':
      longBlink();
      shortBlink();
      shortBlink();
      longBlink();
      break;
    case 'y':
      longBlink();
      shortBlink();
      longBlink();
      longBlink();
      break;
    case 'z':
      longBlink();
      longBlink();
      shortBlink();
      shortBlink();
      break;
    default:
      Serial.print("Error");
      Serial.println(character);
    }
    delay(500); 
    blip();
  }
}








