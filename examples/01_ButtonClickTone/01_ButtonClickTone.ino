/*
  🎵 [스위치를 눌러 소리 출력하기] 🎵

  📌 [프로그램 설명]
  - 내장 스위치를 누르면 설정된 주파수의 소리가 재생됩니다.
  - 소리는 일정 시간(1000ms) 동안 지속되며, 이후 자동으로 종료됩니다.
  - 스위치를 누르면 다시 소리가 재생됩니다.

  📌 [사용 환경]
  - 아두이노 보드 또는 ESP32 등의 개발 보드
  - Geekble_Orgel 라이브러리를 사용하여 톤을 출력 가능
  - **주의**: `tone()` 함수는 일부 보드에서 LED_BUILTIN 핀을 사용할 경우 예상과 다른 동작을 할 수 있음.

  ✅ [사용 방법]
  1. 스위치를 누르면 사운드가 출력됩니다.
  2. 일정 시간(1000ms) 후 자동으로 소리가 멈춥니다.
  3. 스위치를 다시 누르면 다시 소리가 재생됩니다.
*/

#include <Geekble_Orgel.h>  // Geekble_Orgel 라이브러리 포함

// 🔧 Geekble_Orgel 객체 생성
Geekble_Orgel Sing;

// ==============================
// 🔧 핀 설정
// ==============================
#define tonePin LED_BUILTIN  // 소리를 출력할 핀 (Built-In LED 핀 사용)
#define switchPin SW_BUILTIN // 내장 스위치 핀

#define sw_Pressed  LOW   // 스위치가 눌린 상태를 LOW로 정의 (내장 풀업 저항 사용)
#define sw_Released HIGH  // 스위치를 뗀 상태를 HIGH로 정의 (내장 풀업 저항 사용)

// ==============================
// 🎵 음향 설정
// ==============================
#define _frequency 100       // 출력할 주파수(Hz) → 100Hz
#define _duration 1000       // 재생할 시간(ms) → 1000ms (1초)

// ==============================
// 🔧 초기 설정 (setup) 함수
// ==============================
void setup() 
{
  Serial.begin(115200);   // 시리얼 통신 시작 (115200 baud)
  pinMode(tonePin, OUTPUT);  // 출력 핀 설정 (소리 출력)
  pinMode(switchPin, INPUT_PULLUP);  // 스위치 핀을 풀업 입력으로 설정
}

// ==============================
// 🔄 메인 루프 (loop) 함수
// ==============================
void loop() 
{
  // 🔘 스위치가 눌렸는지 확인
  if (digitalRead(switchPin) == sw_Pressed) {  // 스위치는 눌리면 LOW 상태가 됨
    Serial.print("🎵 Switch Pressed, Start Tone\n");

    tone(tonePin, _frequency);  // 설정된 주파수의 톤을 출력
    delay(_duration);           // 설정된 시간(1초) 동안 대기
    noTone(tonePin);            // 톤 재생 중단

    Serial.print("⏳ Time's Up, Tone Finished\n");

    // 🕹️ 버튼이 떼어질 때까지 대기 (디바운싱 방지)
    while (digitalRead(switchPin) == sw_Pressed)
    {
      ;
    }
    delay(50);  // 짧은 대기 (불필요한 추가 입력 방지)
  }
}
