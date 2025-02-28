#include <Geekble_Orgel.h>

Geekble_Orgel Sing;

#define tonePin LED_BUILTIN     // LED Built-In 핀
#define switchPin SW_BUILTIN    // SW Built-In 핀
void setup() 
{
  Serial.begin(115200);
  pinMode(tonePin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(switchPin) == false) {     //스위치가 눌린 경우
    Serial.println("Switch Pressed, Start Random Tone");

    float randomTone = random(n_C2, n_B8);                        //도(2옥타브, 65.41Hz) 에서 시(8옥타브, 7902.13Hz) 사이의 임의 주파수 선택
    Serial.print("Tone Frequency: "); Serial.println(randomTone); // 선택된 임의의 주파수 시리얼 모니터에 출력
    tone(tonePin, randomTone);                                    // 선택된 임의의 주파수 tonePin을 통해 출력
    
    while(digitalRead(switchPin) == false) {
      ;                                                           // 버튼이 눌려있는 동안 대기
    }

    noTone(tonePin);                                              // 버튼이 눌려있지 않으므로 Tone 재생 중단

    Serial.println("Switch Released, Tone Finished");
  }
}
