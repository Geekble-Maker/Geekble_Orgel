#include <Geekble_Orgel.h>

Geekble_Orgel Sing;

#define tonePin LED_BUILTIN     // LED Built-In 핀
#define switchPin SW_BUILTIN    // SW Built-In 핀
void setup() 
{
  Serial.begin(115200);
  pinMode(tonePin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Sing.Set_BPM_QuarterNote(120);
}

void loop() 
{
  if(digitalRead(switchPin) == false) {
    Serial.println("Switch Pressed, Start Singing");

    tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));
    tone(tonePin, n_C5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_half));

    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_half));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_G5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_G5);  delay(Sing.NoteLength(_half));

    tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));
    tone(tonePin, n_C5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_half));

    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
    tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
    tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));

    tone(tonePin, n_C5);  delay(Sing.NoteLength(_half));
    
    noTone(tonePin);
    
    Serial.println("Singing Finished");
  }
}
