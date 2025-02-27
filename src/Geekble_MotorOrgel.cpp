/*
    Geekble_MotorOrgel.h - Library for Note to Frequency Table.
    Created by SooDragon @ Geekble Circuit Maker, Aug 8, 2023.
*/

#include <Geekble_MotorOrgel.h>
#include "Arduino.h"



uint16_t bpm_QuarterNote = 120;

Geekble_MotorOrgel::Geekble_MotorOrgel()
{
  ;
}

unsigned long Geekble_MotorOrgel::NoteLength(float _duration)
{
  return ((60000.0 * _duration) / bpm_QuarterNote);
}

void Geekble_MotorOrgel::Set_BPM_QuarterNote(uint16_t _BPM)
{
  bpm_QuarterNote = _BPM;
}