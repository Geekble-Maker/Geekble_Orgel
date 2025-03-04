/*
  🎵 [스위치를 눌러 계단식 음 출력하기] 🎵

  📌 [프로그램 설명]
  - 버튼을 누르면 2옥타브~8옥타브의 모든 음을 차례대로 연주합니다.
  - 원하는 음표 길이를 선택할 수 있으며, `BPM_QuarterNote` 설정으로 연주 속도를 조절할 수 있습니다.
  - 버튼을 계속 누르고 있는 동안 계단식 음 출력이 진행되며, 버튼을 떼면 종료됩니다.

  📌 [사용 환경]
  - 아두이노 보드 또는 ESP32 등의 개발 보드
  - Geekble_Orgel 라이브러리를 사용하여 음을 출력 가능
  - **주의**: `tone()` 함수는 일부 보드에서 LED_BUILTIN 핀을 사용할 경우 예상과 다른 동작을 할 수 있음.

  ✅ [사용 방법]
  1. 버튼을 누르면 2옥타브~8옥타브까지 모든 음이 차례로 재생됩니다.
  2. 버튼을 누르고 있는 동안 계속 연주되며, 떼면 정지됩니다.
  3. 음표 길이를 조정하려면 `NoteSweep()`에서 원하는 길이를 선택하세요.
*/

#include <Geekble_Orgel.h>  // Geekble_Orgel 라이브러리 포함

// 🎵 Geekble_Orgel 객체 생성
Geekble_Orgel Sing;

// ==============================
// 🔧 핀 설정
// ==============================
#define tonePin LED_BUILTIN  // 사운드를 출력할 핀 (Built-In LED 핀 사용)
#define switchPin SW_BUILTIN // 내장 스위치 핀

// ==============================
// 🔧 스위치 상태 정의
// ==============================
#define sw_Pressed  LOW   // 스위치가 눌린 상태를 LOW로 정의 (내장 풀업 저항 사용)
#define sw_Released HIGH  // 스위치를 뗀 상태를 HIGH로 정의 (내장 풀업 저항 사용)

// ==============================
// 🔧 초기 설정 (setup) 함수
// ==============================
void setup() 
{
  Serial.begin(115200);   // 시리얼 통신 시작 (115200 baud)
  pinMode(tonePin, OUTPUT);  // 출력 핀 설정 (사운드 출력)
  pinMode(switchPin, INPUT_PULLUP);  // 스위치 핀을 풀업 입력으로 설정

  Sing.Set_BPM_QuarterNote(480);  // 기본 BPM 설정 (연주 속도 조절)

  Serial.print("🎵 Ready! Press the button to start the sweep.\n");
}

// ==============================
// 🔄 메인 루프 (loop) 함수
// ==============================
void loop() 
{
  if (digitalRead(switchPin) == sw_Pressed)  
  {  
    Serial.print("🎶 Button Pressed: Starting Note Sweep\n");

    //NoteSweep(_dotteddoubleWhole);  // 온점이중온음표 (가장 느림)
    //NoteSweep(_doubleWhole);        // 이중온음표
    //NoteSweep(_dottedwhole);        // 온점온음표
    //NoteSweep(_whole);              // 온음표
    //NoteSweep(_dottedhalf);         // 온점2분음표
    //NoteSweep(_half);               // 2분음표
    //NoteSweep(_dottedquarter);      // 온점4분음표
    NoteSweep(_quarter);            // 4분음표
    //NoteSweep(_dottedeighth);       // 온점8분음표
    //NoteSweep(_eighth);             // 8분음표
    //NoteSweep(_dottedsixteenth);    // 온점16분음표
    //NoteSweep(_sixteenth);          // 16분음표
    //NoteSweep(_dottedthirtysecond); // 온점32분음표
    //NoteSweep(_thirtysecond);       // 32분음표
    //NoteSweep(_dottedsixtyfourth);  // 온점64분음표
    //NoteSweep(_sixtyfourth);        // 64분음표 (가장 빠름)

    Serial.print("⏹️ Sweep Finished\n");
  }
}

// ==============================
// 🎵 계단식 음 출력 (NoteSweep) 함수
// ==============================
/*
  📌 [NoteSweep() 함수 설명]
  - 2옥타브~8옥타브까지 모든 음을 순차적으로 재생하는 함수입니다.
  - `_noteLength` 값을 조정하여 음표 길이를 변경할 수 있습니다.
*/
void NoteSweep (float _noteLength) {

  tone(tonePin, n_C2 );     delay(Sing.NoteLength(_noteLength));           //도(2옥타브)     
  tone(tonePin, n_Cs2);     delay(Sing.NoteLength(_noteLength));           //도샾(2옥타브)   
  tone(tonePin, n_Db2);     delay(Sing.NoteLength(_noteLength));           //레플렛(2옥타브) 
  tone(tonePin, n_D2 );     delay(Sing.NoteLength(_noteLength));           //레(2옥타브)     
  tone(tonePin, n_Ds2);     delay(Sing.NoteLength(_noteLength));           //레샾(2옥타브)   
  tone(tonePin, n_Eb2);     delay(Sing.NoteLength(_noteLength));           //미플렛(2옥타브) 
  tone(tonePin, n_E2 );     delay(Sing.NoteLength(_noteLength));           //미(2옥타브)     
  tone(tonePin, n_F2 );     delay(Sing.NoteLength(_noteLength));           //파(2옥타브)     
  tone(tonePin, n_Fs2);     delay(Sing.NoteLength(_noteLength));           //파샾(2옥타브)   
  tone(tonePin, n_Gb2);     delay(Sing.NoteLength(_noteLength));           //솔플렛(2옥타브) 
  tone(tonePin, n_G2 );     delay(Sing.NoteLength(_noteLength));           //솔(2옥타브)     
  tone(tonePin, n_Gs2);     delay(Sing.NoteLength(_noteLength));           //솔샾(2옥타브)   
  tone(tonePin, n_Ab2);     delay(Sing.NoteLength(_noteLength));           //라플렛(2옥타브) 
  tone(tonePin, n_A2 );     delay(Sing.NoteLength(_noteLength));           //라(2옥타브)     
  tone(tonePin, n_As2);     delay(Sing.NoteLength(_noteLength));           //라샾(2옥타브)   
  tone(tonePin, n_Bb2);     delay(Sing.NoteLength(_noteLength));           //시플렛(2옥타브) 
  tone(tonePin, n_B2 );     delay(Sing.NoteLength(_noteLength));           //시(2옥타브)     

  tone(tonePin, n_C3 );     delay(Sing.NoteLength(_noteLength));           //도(3옥타브)     
  tone(tonePin, n_Cs3);     delay(Sing.NoteLength(_noteLength));           //도샾(3옥타브)   
  tone(tonePin, n_Db3);     delay(Sing.NoteLength(_noteLength));           //레플렛(3옥타브) 
  tone(tonePin, n_D3 );     delay(Sing.NoteLength(_noteLength));           //레(3옥타브)     
  tone(tonePin, n_Ds3);     delay(Sing.NoteLength(_noteLength));           //레샾(3옥타브)   
  tone(tonePin, n_Eb3);     delay(Sing.NoteLength(_noteLength));           //미플렛(3옥타브) 
  tone(tonePin, n_E3 );     delay(Sing.NoteLength(_noteLength));           //미(3옥타브)     
  tone(tonePin, n_F3 );     delay(Sing.NoteLength(_noteLength));           //파(3옥타브)     
  tone(tonePin, n_Fs3);     delay(Sing.NoteLength(_noteLength));           //파샾(3옥타브)   
  tone(tonePin, n_Gb3);     delay(Sing.NoteLength(_noteLength));           //솔플렛(3옥타브) 
  tone(tonePin, n_G3 );     delay(Sing.NoteLength(_noteLength));           //솔(3옥타브)     
  tone(tonePin, n_Gs3);     delay(Sing.NoteLength(_noteLength));           //솔샾(3옥타브)   
  tone(tonePin, n_Ab3);     delay(Sing.NoteLength(_noteLength));           //라플렛(3옥타브) 
  tone(tonePin, n_A3 );     delay(Sing.NoteLength(_noteLength));           //라(3옥타브)     
  tone(tonePin, n_As3);     delay(Sing.NoteLength(_noteLength));           //라샾(3옥타브)   
  tone(tonePin, n_Bb3);     delay(Sing.NoteLength(_noteLength));           //시플렛(3옥타브) 
  tone(tonePin, n_B3 );     delay(Sing.NoteLength(_noteLength));           //시(3옥타브)     

  tone(tonePin, n_C4 );     delay(Sing.NoteLength(_noteLength));           //도(4옥타브)     
  tone(tonePin, n_Cs4);     delay(Sing.NoteLength(_noteLength));           //도샾(4옥타브)   
  tone(tonePin, n_Db4);     delay(Sing.NoteLength(_noteLength));           //레플렛(4옥타브) 
  tone(tonePin, n_D4 );     delay(Sing.NoteLength(_noteLength));           //레(4옥타브)     
  tone(tonePin, n_Ds4);     delay(Sing.NoteLength(_noteLength));           //레샾(4옥타브)   
  tone(tonePin, n_Eb4);     delay(Sing.NoteLength(_noteLength));           //미플렛(4옥타브) 
  tone(tonePin, n_E4 );     delay(Sing.NoteLength(_noteLength));           //미(4옥타브)     
  tone(tonePin, n_F4 );     delay(Sing.NoteLength(_noteLength));           //파(4옥타브)     
  tone(tonePin, n_Fs4);     delay(Sing.NoteLength(_noteLength));           //파샾(4옥타브)   
  tone(tonePin, n_Gb4);     delay(Sing.NoteLength(_noteLength));           //솔플렛(4옥타브) 
  tone(tonePin, n_G4 );     delay(Sing.NoteLength(_noteLength));           //솔(4옥타브)     
  tone(tonePin, n_Gs4);     delay(Sing.NoteLength(_noteLength));           //솔샾(4옥타브)   
  tone(tonePin, n_Ab4);     delay(Sing.NoteLength(_noteLength));           //라플렛(4옥타브) 
  tone(tonePin, n_A4 );     delay(Sing.NoteLength(_noteLength));           //라(4옥타브)     
  tone(tonePin, n_As4);     delay(Sing.NoteLength(_noteLength));           //라샾(4옥타브)   
  tone(tonePin, n_Bb4);     delay(Sing.NoteLength(_noteLength));           //시플렛(4옥타브) 
  tone(tonePin, n_B4 );     delay(Sing.NoteLength(_noteLength));           //시(4옥타브)     

  tone(tonePin, n_C5 );     delay(Sing.NoteLength(_noteLength));           //도(5옥타브)     
  tone(tonePin, n_Cs5);     delay(Sing.NoteLength(_noteLength));           //도샾(5옥타브)   
  tone(tonePin, n_Db5);     delay(Sing.NoteLength(_noteLength));           //레플렛(5옥타브) 
  tone(tonePin, n_D5 );     delay(Sing.NoteLength(_noteLength));           //레(5옥타브)     
  tone(tonePin, n_Ds5);     delay(Sing.NoteLength(_noteLength));           //레샾(5옥타브)   
  tone(tonePin, n_Eb5);     delay(Sing.NoteLength(_noteLength));           //미플렛(5옥타브) 
  tone(tonePin, n_E5 );     delay(Sing.NoteLength(_noteLength));           //미(5옥타브)     
  tone(tonePin, n_F5 );     delay(Sing.NoteLength(_noteLength));           //파(5옥타브)     
  tone(tonePin, n_Fs5);     delay(Sing.NoteLength(_noteLength));           //파샾(5옥타브)   
  tone(tonePin, n_Gb5);     delay(Sing.NoteLength(_noteLength));           //솔플렛(5옥타브) 
  tone(tonePin, n_G5 );     delay(Sing.NoteLength(_noteLength));           //솔(5옥타브)     
  tone(tonePin, n_Gs5);     delay(Sing.NoteLength(_noteLength));           //솔샾(5옥타브)   
  tone(tonePin, n_Ab5);     delay(Sing.NoteLength(_noteLength));           //라플렛(5옥타브) 
  tone(tonePin, n_A5 );     delay(Sing.NoteLength(_noteLength));           //라(5옥타브)     
  tone(tonePin, n_As5);     delay(Sing.NoteLength(_noteLength));           //라샾(5옥타브)   
  tone(tonePin, n_Bb5);     delay(Sing.NoteLength(_noteLength));           //시플렛(5옥타브) 
  tone(tonePin, n_B5 );     delay(Sing.NoteLength(_noteLength));           //시(5옥타브)     

  tone(tonePin, n_C6 );     delay(Sing.NoteLength(_noteLength));           //도(6옥타브)     
  tone(tonePin, n_Cs6);     delay(Sing.NoteLength(_noteLength));           //도샾(6옥타브)   
  tone(tonePin, n_Db6);     delay(Sing.NoteLength(_noteLength));           //레플렛(6옥타브) 
  tone(tonePin, n_D6 );     delay(Sing.NoteLength(_noteLength));           //레(6옥타브)     
  tone(tonePin, n_Ds6);     delay(Sing.NoteLength(_noteLength));           //레샾(6옥타브)   
  tone(tonePin, n_Eb6);     delay(Sing.NoteLength(_noteLength));           //미플렛(6옥타브) 
  tone(tonePin, n_E6 );     delay(Sing.NoteLength(_noteLength));           //미(6옥타브)     
  tone(tonePin, n_F6 );     delay(Sing.NoteLength(_noteLength));           //파(6옥타브)     
  tone(tonePin, n_Fs6);     delay(Sing.NoteLength(_noteLength));           //파샾(6옥타브)   
  tone(tonePin, n_Gb6);     delay(Sing.NoteLength(_noteLength));           //솔플렛(6옥타브) 
  tone(tonePin, n_G6 );     delay(Sing.NoteLength(_noteLength));           //솔(6옥타브)     
  tone(tonePin, n_Gs6);     delay(Sing.NoteLength(_noteLength));           //솔샾(6옥타브)   
  tone(tonePin, n_Ab6);     delay(Sing.NoteLength(_noteLength));           //라플렛(6옥타브) 
  tone(tonePin, n_A6 );     delay(Sing.NoteLength(_noteLength));           //라(6옥타브)     
  tone(tonePin, n_As6);     delay(Sing.NoteLength(_noteLength));           //라샾(6옥타브)   
  tone(tonePin, n_Bb6);     delay(Sing.NoteLength(_noteLength));           //시플렛(6옥타브) 
  tone(tonePin, n_B6 );     delay(Sing.NoteLength(_noteLength));           //시(6옥타브)     

  tone(tonePin, n_C7 );     delay(Sing.NoteLength(_noteLength));           //도(7옥타브)     
  tone(tonePin, n_Cs7);     delay(Sing.NoteLength(_noteLength));           //도샾(7옥타브)   
  tone(tonePin, n_Db7);     delay(Sing.NoteLength(_noteLength));           //레플렛(7옥타브) 
  tone(tonePin, n_D7 );     delay(Sing.NoteLength(_noteLength));           //레(7옥타브)     
  tone(tonePin, n_Ds7);     delay(Sing.NoteLength(_noteLength));           //레샾(7옥타브)   
  tone(tonePin, n_Eb7);     delay(Sing.NoteLength(_noteLength));           //미플렛(7옥타브) 
  tone(tonePin, n_E7 );     delay(Sing.NoteLength(_noteLength));           //미(7옥타브)     
  tone(tonePin, n_F7 );     delay(Sing.NoteLength(_noteLength));           //파(7옥타브)     
  tone(tonePin, n_Fs7);     delay(Sing.NoteLength(_noteLength));           //파샾(7옥타브)   
  tone(tonePin, n_Gb7);     delay(Sing.NoteLength(_noteLength));           //솔플렛(7옥타브) 
  tone(tonePin, n_G7 );     delay(Sing.NoteLength(_noteLength));           //솔(7옥타브)     
  tone(tonePin, n_Gs7);     delay(Sing.NoteLength(_noteLength));           //솔샾(7옥타브)   
  tone(tonePin, n_Ab7);     delay(Sing.NoteLength(_noteLength));           //라플렛(7옥타브) 
  tone(tonePin, n_A7 );     delay(Sing.NoteLength(_noteLength));           //라(7옥타브)     
  tone(tonePin, n_As7);     delay(Sing.NoteLength(_noteLength));           //라샾(7옥타브)   
  tone(tonePin, n_Bb7);     delay(Sing.NoteLength(_noteLength));           //시플렛(7옥타브) 
  tone(tonePin, n_B7 );     delay(Sing.NoteLength(_noteLength));           //시(7옥타브)     

  tone(tonePin, n_C8 );     delay(Sing.NoteLength(_noteLength));           //도(8옥타브)     
  tone(tonePin, n_Cs8);     delay(Sing.NoteLength(_noteLength));           //도샾(8옥타브)   
  tone(tonePin, n_Db8);     delay(Sing.NoteLength(_noteLength));           //레플렛(8옥타브) 
  tone(tonePin, n_D8 );     delay(Sing.NoteLength(_noteLength));           //레(8옥타브)     
  tone(tonePin, n_Ds8);     delay(Sing.NoteLength(_noteLength));           //레샾(8옥타브)   
  tone(tonePin, n_Eb8);     delay(Sing.NoteLength(_noteLength));           //미플렛(8옥타브) 
  tone(tonePin, n_E8 );     delay(Sing.NoteLength(_noteLength));           //미(8옥타브)     
  tone(tonePin, n_F8 );     delay(Sing.NoteLength(_noteLength));           //파(8옥타브)     
  tone(tonePin, n_Fs8);     delay(Sing.NoteLength(_noteLength));           //파샾(8옥타브)   
  tone(tonePin, n_Gb8);     delay(Sing.NoteLength(_noteLength));           //솔플렛(8옥타브) 
  tone(tonePin, n_G8 );     delay(Sing.NoteLength(_noteLength));           //솔(8옥타브)     
  tone(tonePin, n_Gs8);     delay(Sing.NoteLength(_noteLength));           //솔샾(8옥타브)   
  tone(tonePin, n_Ab8);     delay(Sing.NoteLength(_noteLength));           //라플렛(8옥타브) 
  tone(tonePin, n_A8 );     delay(Sing.NoteLength(_noteLength));           //라(8옥타브)     
  tone(tonePin, n_As8);     delay(Sing.NoteLength(_noteLength));           //라샾(8옥타브)   
  tone(tonePin, n_Bb8);     delay(Sing.NoteLength(_noteLength));           //시플렛(8옥타브) 
  tone(tonePin, n_B8 );     delay(Sing.NoteLength(_noteLength));           //시(8옥타브)     
  
  // 🔇 모든 음이 끝나면 소리 중단
  noTone(tonePin);
} 