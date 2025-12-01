const int NOTE_E4 = 330;
const int NOTE_F4 = 349;
const int NOTE_G4 = 392;
const int NOTE_A4 = 440;
const int NOTE_B4 = 494;
const int NOTE_C5 = 523;
const int NOTE_D5 = 587;
const int NOTE_E5 = 659;
const int NOTE_C4 = 262; 
const int NOTE_D4 = 294;

const int buzzerPin = 3;

const int melody[] = {

  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, 
  NOTE_E4,
  
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_D5, NOTE_D5, NOTE_E4,
  NOTE_D5, NOTE_G4,
  
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5,
  NOTE_E4,
  
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4,
  NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_G4, NOTE_G4, NOTE_F4, NOTE_D4, 
  NOTE_C4
};

const int noteDurations[] = {
  250, 250, 500,
  250, 250, 500,
  250, 250, 250, 250,
  800,
  
  250, 250, 250, 250,
  250, 250, 250, 125, 125,
  250, 250, 250, 250,
  500, 500,
  
  250, 250, 500,
  250, 250, 500,
  250, 250, 250, 250,
  800,
  
  250, 250, 250, 250,
  250, 250, 250, 125, 125,
  250, 250, 250, 250,
  1000
};

const int notesCount = sizeof(melody) / sizeof(melody[0]);

void setup() {
  pinMode(buzzerPin, OUTPUT);

 for (int i = 0; i < notesCount; i++) {
    tone(buzzerPin, melody[i]);
    delay(noteDurations[i]);
    
    noTone(buzzerPin);
    delay(30);
 }
}

void loop() {
}