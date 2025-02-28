/*
    Geekble_MotorOrgel.h - Library for Note to Frequency Table.
    Created by SooDragon @ Geekble Circuit Maker, Feb 21, 2025.
*/

#include <Geekble_Orgel.h>
#include "Arduino.h"



uint16_t bpm_QuarterNote = 120;

Geekble_Orgel::Geekble_Orgel()
{
  ;
}

unsigned long Geekble_Orgel::NoteLength(float _duration)
{
  return ((60000.0 * _duration) / bpm_QuarterNote);
}

void Geekble_Orgel::Set_BPM_QuarterNote(uint16_t _BPM)
{
  bpm_QuarterNote = _BPM;
}