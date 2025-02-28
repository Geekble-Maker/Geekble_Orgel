#include <Geekble_Orgel.h>

Geekble_Orgel Sing;

#define tonePin LED_BUILTIN     // LED Built-In 핀
#define switchPin SW_BUILTIN    // SW Built-In 핀

#define _frequency n_C3          // 출력할 주파수 "도(3옥타브, 130.81Hz)"

void setup() 
{
  Serial.begin(115200);
  pinMode(tonePin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(switchPin) == false) {   // 스위치가 눌린 경우
    Serial.println("Switch Pressed, Start Tone");

    tone(tonePin, _frequency);            // 설정된 주파수 tonePin을 통해 출력

    while(digitalRead(switchPin) == false) {
      ;                                   // 버튼이 눌려있는 동안 대기
    }

    noTone(tonePin);                      // 버튼이 눌려있지 않으므로 Tone 재생 중단

    Serial.println("Button Released, Tone Finished");
  }
}
