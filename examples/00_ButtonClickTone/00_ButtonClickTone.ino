#include <Geekble_Orgel.h>

Geekble_Orgel Sing;

#define tonePin LED_BUILTIN     // LED Built-In 핀
#define switchPin SW_BUILTIN    // SW Built-In 핀

#define _frequency 100          // 출력할 주파수(Hz)
#define _duration 1000          // 재생할 시간(mSec)

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
    delay(_duration);                     // 설정된 시간동안 대기
    noTone(tonePin);                      // 설정된 시간 이후 Tone 재생 중단

    Serial.println("Timess Up, Tone Finished");
  }
  else {                                    // 스위치를 누르지 않은 경우
  }
}
