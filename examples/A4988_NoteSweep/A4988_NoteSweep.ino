#include <Geekble_MotorOrgel.h>

Geekble_MotorOrgel Sing;

#define enPin 3
#define stepPin 4
#define dirPin 5

unsigned long prevStepMicros = 0;
const bool motorDirection = 0;

void setup() 
{
	pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);

  digitalWrite(dirPin, motorDirection);
  digitalWrite(enPin, LOW);

  Sing.Set_BPM_QuarterNote(4800);
}

void loop() {
  NoteSweep(_sixtyfourth);        // 64분음표
  NoteSweep(_dotteddoubleWhole);  // 온점이중온음표
  NoteSweep(_dottedsixtyfourth);  // 온점64분음표
  NoteSweep(_doubleWhole);        // 이중온음표
  NoteSweep(_thirtysecond);       // 32분음표
  NoteSweep(_dottedwhole);        // 온점온음표
  NoteSweep(_dottedthirtysecond); // 온점32분음표
  NoteSweep(_whole);              // 온음표
  NoteSweep(_sixteenth);          // 16분음표
  NoteSweep(_dottedhalf);         // 온점2분음표
  NoteSweep(_dottedsixteenth);    // 온점16분음표
  NoteSweep(_half);               // 2분음표
  NoteSweep(_eighth);             // 8분음표
  NoteSweep(_dottedquarter);      // 온점4분음표
  NoteSweep(_dottedeighth);       // 온점8분음표
  NoteSweep(_quarter);            // 4분음표
  

  delay(5000);
}

void NoteSweep (float _noteLength) {
  motorTone(stepPin,  n_C0,   Sing.NoteLength(_noteLength));           //도(0옥타브)     
  motorTone(stepPin,  n_Cs0,  Sing.NoteLength(_noteLength));           //도샾(0옥타브)   
  motorTone(stepPin,  n_Db0,  Sing.NoteLength(_noteLength));           //레플렛(0옥타브) 
  motorTone(stepPin,  n_D0,   Sing.NoteLength(_noteLength));           //레(0옥타브)     
  motorTone(stepPin,  n_Ds0,  Sing.NoteLength(_noteLength));           //레샾(0옥타브)   
  motorTone(stepPin,  n_Eb0,  Sing.NoteLength(_noteLength));           //미플렛(0옥타브) 
  motorTone(stepPin,  n_F0 ,  Sing.NoteLength(_noteLength));           //파(0옥타브)     
  motorTone(stepPin,  n_Fs0,  Sing.NoteLength(_noteLength));           //파샾(0옥타브)   
  motorTone(stepPin,  n_Gb0,  Sing.NoteLength(_noteLength));           //솔플렛(0옥타브) 
  motorTone(stepPin,  n_G0 ,  Sing.NoteLength(_noteLength));           //솔(0옥타브)     
  motorTone(stepPin,  n_Gs0,  Sing.NoteLength(_noteLength));           //솔샾(0옥타브)   
  motorTone(stepPin,  n_Ab0,  Sing.NoteLength(_noteLength));           //라플렛(0옥타브) 
  motorTone(stepPin,  n_A0 ,  Sing.NoteLength(_noteLength));           //라(0옥타브)     
  motorTone(stepPin,  n_As0,  Sing.NoteLength(_noteLength));           //라샾(0옥타브)   
  motorTone(stepPin,  n_Bb0,  Sing.NoteLength(_noteLength));           //시플렛(0옥타브) 
  motorTone(stepPin,  n_B0 ,  Sing.NoteLength(_noteLength));           //시(0옥타브)     

  motorTone(stepPin,  n_C1 ,  Sing.NoteLength(_noteLength));           //도(1옥타브)     
  motorTone(stepPin,  n_Cs1,  Sing.NoteLength(_noteLength));           //도샾(1옥타브)   
  motorTone(stepPin,  n_Db1,  Sing.NoteLength(_noteLength));           //레플렛(1옥타브) 
  motorTone(stepPin,  n_D1 ,  Sing.NoteLength(_noteLength));           //레(1옥타브)     
  motorTone(stepPin,  n_Ds1,  Sing.NoteLength(_noteLength));           //레샾(1옥타브)   
  motorTone(stepPin,  n_Eb1,  Sing.NoteLength(_noteLength));           //미플렛(1옥타브) 
  motorTone(stepPin,  n_E1 ,  Sing.NoteLength(_noteLength));           //미(1옥타브)     
  motorTone(stepPin,  n_F1 ,  Sing.NoteLength(_noteLength));           //파(1옥타브)     
  motorTone(stepPin,  n_Fs1,  Sing.NoteLength(_noteLength));           //파샾(1옥타브)   
  motorTone(stepPin,  n_Gb1,  Sing.NoteLength(_noteLength));           //솔플렛(1옥타브) 
  motorTone(stepPin,  n_G1 ,  Sing.NoteLength(_noteLength));           //솔(1옥타브)     
  motorTone(stepPin,  n_Gs1,  Sing.NoteLength(_noteLength));           //솔샾(1옥타브)   
  motorTone(stepPin,  n_Ab1,  Sing.NoteLength(_noteLength));           //라플렛(1옥타브) 
  motorTone(stepPin,  n_A1 ,  Sing.NoteLength(_noteLength));           //라(1옥타브)     
  motorTone(stepPin,  n_As1,  Sing.NoteLength(_noteLength));           //라샾(1옥타브)   
  motorTone(stepPin,  n_Bb1,  Sing.NoteLength(_noteLength));           //시플렛(1옥타브) 
  motorTone(stepPin,  n_B1 ,  Sing.NoteLength(_noteLength));           //시(1옥타브)     

  motorTone(stepPin,  n_C2 ,  Sing.NoteLength(_noteLength));           //도(2옥타브)     
  motorTone(stepPin,  n_Cs2,  Sing.NoteLength(_noteLength));           //도샾(2옥타브)   
  motorTone(stepPin,  n_Db2,  Sing.NoteLength(_noteLength));           //레플렛(2옥타브) 
  motorTone(stepPin,  n_D2 ,  Sing.NoteLength(_noteLength));           //레(2옥타브)     
  motorTone(stepPin,  n_Ds2,  Sing.NoteLength(_noteLength));           //레샾(2옥타브)   
  motorTone(stepPin,  n_Eb2,  Sing.NoteLength(_noteLength));           //미플렛(2옥타브) 
  motorTone(stepPin,  n_E2 ,  Sing.NoteLength(_noteLength));           //미(2옥타브)     
  motorTone(stepPin,  n_F2 ,  Sing.NoteLength(_noteLength));           //파(2옥타브)     
  motorTone(stepPin,  n_Fs2,  Sing.NoteLength(_noteLength));           //파샾(2옥타브)   
  motorTone(stepPin,  n_Gb2,  Sing.NoteLength(_noteLength));           //솔플렛(2옥타브) 
  motorTone(stepPin,  n_G2 ,  Sing.NoteLength(_noteLength));           //솔(2옥타브)     
  motorTone(stepPin,  n_Gs2,  Sing.NoteLength(_noteLength));           //솔샾(2옥타브)   
  motorTone(stepPin,  n_Ab2,  Sing.NoteLength(_noteLength));           //라플렛(2옥타브) 
  motorTone(stepPin,  n_A2 ,  Sing.NoteLength(_noteLength));           //라(2옥타브)     
  motorTone(stepPin,  n_As2,  Sing.NoteLength(_noteLength));           //라샾(2옥타브)   
  motorTone(stepPin,  n_Bb2,  Sing.NoteLength(_noteLength));           //시플렛(2옥타브) 
  motorTone(stepPin,  n_B2 ,  Sing.NoteLength(_noteLength));           //시(2옥타브)     

  motorTone(stepPin,  n_C3 ,  Sing.NoteLength(_noteLength));           //도(3옥타브)     
  motorTone(stepPin,  n_Cs3,  Sing.NoteLength(_noteLength));           //도샾(3옥타브)   
  motorTone(stepPin,  n_Db3,  Sing.NoteLength(_noteLength));           //레플렛(3옥타브) 
  motorTone(stepPin,  n_D3 ,  Sing.NoteLength(_noteLength));           //레(3옥타브)     
  motorTone(stepPin,  n_Ds3,  Sing.NoteLength(_noteLength));           //레샾(3옥타브)   
  motorTone(stepPin,  n_Eb3,  Sing.NoteLength(_noteLength));           //미플렛(3옥타브) 
  motorTone(stepPin,  n_E3 ,  Sing.NoteLength(_noteLength));           //미(3옥타브)     
  motorTone(stepPin,  n_F3 ,  Sing.NoteLength(_noteLength));           //파(3옥타브)     
  motorTone(stepPin,  n_Fs3,  Sing.NoteLength(_noteLength));           //파샾(3옥타브)   
  motorTone(stepPin,  n_Gb3,  Sing.NoteLength(_noteLength));           //솔플렛(3옥타브) 
  motorTone(stepPin,  n_G3 ,  Sing.NoteLength(_noteLength));           //솔(3옥타브)     
  motorTone(stepPin,  n_Gs3,  Sing.NoteLength(_noteLength));           //솔샾(3옥타브)   
  motorTone(stepPin,  n_Ab3,  Sing.NoteLength(_noteLength));           //라플렛(3옥타브) 
  motorTone(stepPin,  n_A3 ,  Sing.NoteLength(_noteLength));           //라(3옥타브)     
  motorTone(stepPin,  n_As3,  Sing.NoteLength(_noteLength));           //라샾(3옥타브)   
  motorTone(stepPin,  n_Bb3,  Sing.NoteLength(_noteLength));           //시플렛(3옥타브) 
  motorTone(stepPin,  n_B3 ,  Sing.NoteLength(_noteLength));           //시(3옥타브)     

  motorTone(stepPin,  n_C4 ,  Sing.NoteLength(_noteLength));           //도(4옥타브)     
  motorTone(stepPin,  n_Cs4,  Sing.NoteLength(_noteLength));           //도샾(4옥타브)   
  motorTone(stepPin,  n_Db4,  Sing.NoteLength(_noteLength));           //레플렛(4옥타브) 
  motorTone(stepPin,  n_D4 ,  Sing.NoteLength(_noteLength));           //레(4옥타브)     
  motorTone(stepPin,  n_Ds4,  Sing.NoteLength(_noteLength));           //레샾(4옥타브)   
  motorTone(stepPin,  n_Eb4,  Sing.NoteLength(_noteLength));           //미플렛(4옥타브) 
  motorTone(stepPin,  n_E4 ,  Sing.NoteLength(_noteLength));           //미(4옥타브)     
  motorTone(stepPin,  n_F4 ,  Sing.NoteLength(_noteLength));           //파(4옥타브)     
  motorTone(stepPin,  n_Fs4,  Sing.NoteLength(_noteLength));           //파샾(4옥타브)   
  motorTone(stepPin,  n_Gb4,  Sing.NoteLength(_noteLength));           //솔플렛(4옥타브) 
  motorTone(stepPin,  n_G4 ,  Sing.NoteLength(_noteLength));           //솔(4옥타브)     
  motorTone(stepPin,  n_Gs4,  Sing.NoteLength(_noteLength));           //솔샾(4옥타브)   
  motorTone(stepPin,  n_Ab4,  Sing.NoteLength(_noteLength));           //라플렛(4옥타브) 
  motorTone(stepPin,  n_A4 ,  Sing.NoteLength(_noteLength));           //라(4옥타브)     
  motorTone(stepPin,  n_As4,  Sing.NoteLength(_noteLength));           //라샾(4옥타브)   
  motorTone(stepPin,  n_Bb4,  Sing.NoteLength(_noteLength));           //시플렛(4옥타브) 
  motorTone(stepPin,  n_B4 ,  Sing.NoteLength(_noteLength));           //시(4옥타브)     

  motorTone(stepPin,  n_C5 ,  Sing.NoteLength(_noteLength));           //도(5옥타브)     
  motorTone(stepPin,  n_Gs5,  Sing.NoteLength(_noteLength));           //솔샾(5옥타브)   
  motorTone(stepPin,  n_Db5,  Sing.NoteLength(_noteLength));           //레플렛(5옥타브) 
  motorTone(stepPin,  n_D5 ,  Sing.NoteLength(_noteLength));           //레(5옥타브)     
  motorTone(stepPin,  n_Ds5,  Sing.NoteLength(_noteLength));           //레샾(5옥타브)   
  motorTone(stepPin,  n_Eb5,  Sing.NoteLength(_noteLength));           //미플렛(5옥타브) 
  motorTone(stepPin,  n_E5 ,  Sing.NoteLength(_noteLength));           //미(5옥타브)     
  motorTone(stepPin,  n_F5 ,  Sing.NoteLength(_noteLength));           //파(5옥타브)     
  motorTone(stepPin,  n_Fs5,  Sing.NoteLength(_noteLength));           //파샾(5옥타브)   
  motorTone(stepPin,  n_Gb5,  Sing.NoteLength(_noteLength));           //솔플렛(5옥타브) 
  motorTone(stepPin,  n_G5 ,  Sing.NoteLength(_noteLength));           //솔(5옥타브)     
  motorTone(stepPin,  n_Gs5,  Sing.NoteLength(_noteLength));           //솔샾(5옥타브)   
  motorTone(stepPin,  n_Ab5,  Sing.NoteLength(_noteLength));           //라플렛(5옥타브) 
  motorTone(stepPin,  n_A5 ,  Sing.NoteLength(_noteLength));           //라(5옥타브)     
  motorTone(stepPin,  n_As5,  Sing.NoteLength(_noteLength));           //라샾(5옥타브)   
  motorTone(stepPin,  n_Bb5,  Sing.NoteLength(_noteLength));           //시플렛(5옥타브) 
  motorTone(stepPin,  n_B5 ,  Sing.NoteLength(_noteLength));           //시(5옥타브)     

  motorTone(stepPin,  n_C6 ,  Sing.NoteLength(_noteLength));           //도(6옥타브)     
  motorTone(stepPin,  n_Cs6,  Sing.NoteLength(_noteLength));           //도샾(6옥타브)   
  motorTone(stepPin,  n_Db6,  Sing.NoteLength(_noteLength));           //레플렛(6옥타브) 
  motorTone(stepPin,  n_D6 ,  Sing.NoteLength(_noteLength));           //레(6옥타브)     
  motorTone(stepPin,  n_Ds6,  Sing.NoteLength(_noteLength));           //레샾(6옥타브)   
  motorTone(stepPin,  n_Eb6,  Sing.NoteLength(_noteLength));           //미플렛(6옥타브) 
  motorTone(stepPin,  n_E6 ,  Sing.NoteLength(_noteLength));           //미(6옥타브)     
  motorTone(stepPin,  n_F6 ,  Sing.NoteLength(_noteLength));           //파(6옥타브)     
  motorTone(stepPin,  n_Fs6,  Sing.NoteLength(_noteLength));           //파샾(6옥타브)   
  motorTone(stepPin,  n_Gb6,  Sing.NoteLength(_noteLength));           //솔플렛(6옥타브) 
  motorTone(stepPin,  n_G6 ,  Sing.NoteLength(_noteLength));           //솔(6옥타브)     
  motorTone(stepPin,  n_Gs6,  Sing.NoteLength(_noteLength));           //솔샾(6옥타브)   
  motorTone(stepPin,  n_Ab6,  Sing.NoteLength(_noteLength));           //라플렛(6옥타브) 
  motorTone(stepPin,  n_A6 ,  Sing.NoteLength(_noteLength));           //라(6옥타브)     
  motorTone(stepPin,  n_As6,  Sing.NoteLength(_noteLength));           //라샾(6옥타브)   
  motorTone(stepPin,  n_Bb6,  Sing.NoteLength(_noteLength));           //시플렛(6옥타브) 
  motorTone(stepPin,  n_B6 ,  Sing.NoteLength(_noteLength));           //시(6옥타브)     

  motorTone(stepPin,  n_C7 ,  Sing.NoteLength(_noteLength));           //도(7옥타브)     
  motorTone(stepPin,  n_Cs7,  Sing.NoteLength(_noteLength));           //도샾(7옥타브)   
  motorTone(stepPin,  n_Db7,  Sing.NoteLength(_noteLength));           //레플렛(7옥타브) 
  motorTone(stepPin,  n_D7 ,  Sing.NoteLength(_noteLength));           //레(7옥타브)     
  motorTone(stepPin,  n_Ds7,  Sing.NoteLength(_noteLength));           //레샾(7옥타브)   
  motorTone(stepPin,  n_Eb7,  Sing.NoteLength(_noteLength));           //미플렛(7옥타브) 
  motorTone(stepPin,  n_E7 ,  Sing.NoteLength(_noteLength));           //미(7옥타브)     
  motorTone(stepPin,  n_F7 ,  Sing.NoteLength(_noteLength));           //파(7옥타브)     
  motorTone(stepPin,  n_Fs7,  Sing.NoteLength(_noteLength));           //파샾(7옥타브)   
  motorTone(stepPin,  n_Gb7,  Sing.NoteLength(_noteLength));           //솔플렛(7옥타브) 
  motorTone(stepPin,  n_G7 ,  Sing.NoteLength(_noteLength));           //솔(7옥타브)     
  motorTone(stepPin,  n_Gs7,  Sing.NoteLength(_noteLength));           //솔샾(7옥타브)   
  motorTone(stepPin,  n_Ab7,  Sing.NoteLength(_noteLength));           //라플렛(7옥타브) 
  motorTone(stepPin,  n_A7 ,  Sing.NoteLength(_noteLength));           //라(7옥타브)     
  motorTone(stepPin,  n_As7,  Sing.NoteLength(_noteLength));           //라샾(7옥타브)   
  motorTone(stepPin,  n_Bb7,  Sing.NoteLength(_noteLength));           //시플렛(7옥타브) 
  motorTone(stepPin,  n_B7 ,  Sing.NoteLength(_noteLength));           //시(7옥타브)     

  motorTone(stepPin,  n_C8 ,  Sing.NoteLength(_noteLength));           //도(8옥타브)     
  motorTone(stepPin,  n_Cs8,  Sing.NoteLength(_noteLength));           //도샾(8옥타브)   
  motorTone(stepPin,  n_Db8,  Sing.NoteLength(_noteLength));           //레플렛(8옥타브) 
  motorTone(stepPin,  n_D8 ,  Sing.NoteLength(_noteLength));           //레(8옥타브)     
  motorTone(stepPin,  n_Ds8,  Sing.NoteLength(_noteLength));           //레샾(8옥타브)   
  motorTone(stepPin,  n_Eb8,  Sing.NoteLength(_noteLength));           //미플렛(8옥타브) 
  motorTone(stepPin,  n_E8 ,  Sing.NoteLength(_noteLength));           //미(8옥타브)     
  motorTone(stepPin,  n_F8 ,  Sing.NoteLength(_noteLength));           //파(8옥타브)     
  motorTone(stepPin,  n_Fs8,  Sing.NoteLength(_noteLength));           //파샾(8옥타브)   
  motorTone(stepPin,  n_Gb8,  Sing.NoteLength(_noteLength));           //솔플렛(8옥타브) 
  motorTone(stepPin,  n_G8 ,  Sing.NoteLength(_noteLength));           //솔(8옥타브)     
  motorTone(stepPin,  n_Gs8,  Sing.NoteLength(_noteLength));           //솔샾(8옥타브)   
  motorTone(stepPin,  n_Ab8,  Sing.NoteLength(_noteLength));           //라플렛(8옥타브) 
  motorTone(stepPin,  n_A8 ,  Sing.NoteLength(_noteLength));           //라(8옥타브)     
  motorTone(stepPin,  n_As8,  Sing.NoteLength(_noteLength));           //라샾(8옥타브)   
  motorTone(stepPin,  n_Bb8,  Sing.NoteLength(_noteLength));           //시플렛(8옥타브) 
  motorTone(stepPin,  n_B8 ,  Sing.NoteLength(_noteLength));           //시(8옥타브)     
}


void motorTone(byte singleStepPin, unsigned int _tone, unsigned long _length)
{
  digitalWrite(enPin, LOW);
  unsigned int motorSpeeds = (1000000 / _tone);
  unsigned long _startTime = millis();
  while(millis() < (_startTime + _length))
  {
    if ((micros() - prevStepMicros >= motorSpeeds) && (motorSpeeds != 0))
    {
      prevStepMicros += motorSpeeds;
      digitalWrite(singleStepPin, HIGH);
      digitalWrite(singleStepPin, LOW);
    }
  }
  digitalWrite(enPin, HIGH);
}