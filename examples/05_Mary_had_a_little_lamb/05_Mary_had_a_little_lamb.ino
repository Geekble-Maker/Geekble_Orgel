/*
  🎵 [버튼을 눌러 멜로디 연주하기] 🎵

  📌 [프로그램 설명]
  - 버튼을 누르면 미리 정해진 멜로디가 연주됩니다.
  - Geekble_Orgel 라이브러리를 사용하여 일정한 BPM 속도로 연주됩니다.
  - 버튼을 떼면 자동으로 연주가 종료됩니다.

  📌 [사용 환경]
  - 아두이노 보드 또는 ESP32 등의 개발 보드
  - Geekble_Orgel 라이브러리 필요
  - **주의**: `tone()` 함수는 일부 보드에서 LED_BUILTIN 핀을 사용할 경우 예상과 다른 동작을 할 수 있음.

  ✅ [사용 방법]
  1. 버튼을 누르면 미리 정해진 멜로디가 연주됩니다.
  2. 버튼을 계속 누르고 있는 동안 연주가 진행되며, 떼면 정지됩니다.
  3. 멜로디를 변경하려면 `PlayMelody()` 함수에서 음표를 수정하세요.
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

  Sing.Set_BPM_QuarterNote(120);  // 기본 BPM 설정 (연주 속도 조절)

  Serial.print("🎵 Ready! Press the button to start the melody.\n");
}

// ==============================
// 🔄 메인 루프 (loop) 함수
// ==============================
void loop() 
{
  if (digitalRead(switchPin) == sw_Pressed)  
  {  
    Serial.print("🎶 Button Pressed: Playing Melody\n");

    PlayMelody();  // 🎵 멜로디 연주 실행

    Serial.print("⏹️ Melody Finished\n");
  }
}

// ==============================
// 🎵 멜로디 연주 (PlayMelody) 함수
// ==============================
/*
  📌 [PlayMelody() 함수 설명]
  - 미리 정해진 음표를 차례대로 연주하는 함수입니다.
  - `_noteLength` 값을 조정하여 음표 길이를 변경할 수 있습니다.
*/
void PlayMelody() 
{
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_dottedquarter));  // 🎵 미 (E5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_eighth));         // 🎵 레 (D5)
  tone(tonePin, n_C5 );  delay(Sing.NoteLength(_quarter));        // 🎵 도 (C5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_quarter));        // 🎵 미 (E5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_quarter));        // 🎵 미 (E5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_half));           // 🎵 미 (E5)

  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_half));           // 🎵 레 (D5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_quarter));        // 🎵 미 (E5)
  tone(tonePin, n_G5 );  delay(Sing.NoteLength(_quarter));        // 🎵 솔 (G5)
  tone(tonePin, n_G5 );  delay(Sing.NoteLength(_half));           // 🎵 솔 (G5)

  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_dottedquarter));  // 🎵 미 (E5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_eighth));         // 🎵 레 (D5)
  tone(tonePin, n_C5 );  delay(Sing.NoteLength(_quarter));        // 🎵 도 (C5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_quarter));        // 🎵 미 (E5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_quarter));        // 🎵 미 (E5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_half));           // 🎵 미 (E5)

  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_quarter));        // 🎵 레 (D5)
  tone(tonePin, n_E5 );  delay(Sing.NoteLength(_dottedquarter));  // 🎵 미 (E5)
  tone(tonePin, n_D5 );  delay(Sing.NoteLength(_eighth));         // 🎵 레 (D5)
  tone(tonePin, n_C5 );  delay(Sing.NoteLength(_half));           // 🎵 도 (C5)

  // 🔇 연주가 끝나면 소리 중단
  noTone(tonePin);
}
