/*
  🎵 [스위치를 눌러 음 출력하기] 🎵

  📌 [프로그램 설명]
  - 내장 스위치를 누르면 "도(C3, 130.81Hz)" 음이 출력됩니다.
  - 버튼을 누르고 있는 동안 소리가 지속되며, 버튼을 떼면 소리가 멈춥니다.
  - 시리얼 모니터에 버튼 상태 및 소리 출력 상태를 표시합니다.

  📌 [사용 환경]
  - 아두이노 보드 또는 ESP32 등의 개발 보드
  - Geekble_Orgel 라이브러리를 사용하여 음을 출력 가능
  - **주의**: `tone()` 함수는 일부 보드에서 LED_BUILTIN 핀을 사용할 경우 예상과 다른 동작을 할 수 있음.

  ✅ [사용 방법]
  1. 스위치를 누르면 설정된 주파수(130.81Hz)의 사운드가 출력됩니다.
  2. 버튼을 누르고 있는 동안 사운드가 유지됩니다.
  3. 버튼을 떼면 소리가 멈추고, 시리얼 모니터에 상태가 출력됩니다.
*/

#include <Geekble_Orgel.h>  // Geekble_Orgel 라이브러리 포함

// 🔧 Geekble_Orgel 객체 생성
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
// 🎵 음향 설정
// ==============================
#define _frequency n_C3   // Geekble_Orgel에서 제공하는 "도(C3, 130.81Hz)" 주파수 값

// ==============================
// 🔧 초기 설정 (setup) 함수
// ==============================
void setup() 
{
  Serial.begin(115200);   // 시리얼 통신 시작 (115200 baud)
  pinMode(tonePin, OUTPUT);  // 출력 핀 설정 (사운드 출력)
  pinMode(switchPin, INPUT_PULLUP);  // 스위치 핀을 풀업 입력으로 설정

  Serial.print("🎵 Ready! Press the button to play a sound.\n");
}

// ==============================
// 🔄 메인 루프 (loop) 함수
// ==============================
void loop() 
{
  // 🔘 스위치가 눌렸는지 확인
  if (digitalRead(switchPin) == sw_Pressed)  
  {  
    Serial.print("🎶 Button Pressed: Playing Sound\n");

    tone(tonePin, _frequency);  // 설정된 주파수의 톤을 출력

    // 🕹️ 버튼이 떼어질 때까지 대기
    while (digitalRead(switchPin) == sw_Pressed) 
    { 
      ; 
    }

    noTone(tonePin);  // 버튼을 떼었으므로 소리 중단
    Serial.print("⏹️ Button Released: Sound Stopped\n");
  }
}
