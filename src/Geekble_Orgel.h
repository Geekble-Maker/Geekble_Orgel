/*
    Geekble_Orgel - Library for Orgel.
    Created by SooDragon @ Geekble Circuit Maker, Feb 27, 2025.
*/
#include "Arduino.h"


#ifndef Geekble_Orgel_h
    #define Geekble_Orgel_h
    
    class Geekble_Orgel
    {
        public:
        Geekble_Orgel();    // Construct Class, Initialize function.
        unsigned long NoteLength(float _duration);
        void Set_BPM_QuarterNote(uint16_t _BPM);
        private:
        ;
    };

#endif

#define _dottedbreve 12.0
#define _dotteddoubleWhole 12.0
#define _breve 8.0
#define _doubleWhole 8.0
#define _dottedsemibreve 6.0
#define _dottedwhole 6.0
#define _semibreve 4.0
#define _whole 4.0
#define _dottedminim 3.0
#define _dottedhalf 3.0
#define _minim 2.0
#define _half 2.0
#define _dottedcrotchet 1.5
#define _dottedquarter 1.5
#define _crotchet 1.0
#define _quarter 1.0
#define _dottedquaver 0.75
#define _dottedeighth 0.75
#define _quaver 0.5
#define _eighth 0.5
#define _dottedsemiquaver 0.12
#define _dottedsixteenth 0.12
#define _semiquaver 0.25
#define _sixteenth 0.25
#define _dotteddemisemiquaver 0.1875
#define _dottedthirtysecond 0.1875
#define _demisemiquaver 0.125
#define _thirtysecond 0.125
#define _dottedhemidemisemiquaver 0.09375
#define _dottedsixtyfourth 0.09375
#define _hemidemisemiquaver 0.0625
#define _sixtyfourth 0.0625

#define n_C0 16.35
#define n_Cs0 17.32
#define n_Db0 17.32
#define n_D0 18.35
#define n_Ds0 19.45
#define n_Eb0 19.45
#define n_E0 20.60
#define n_F0 21.83
#define n_Fs0 23.12
#define n_Gb0 23.12
#define n_G0 24.50
#define n_Gs0 25.96
#define n_Ab0 25.96
#define n_A0 27.50
#define n_As0 29.14
#define n_Bb0 29.14
#define n_B0 30.87
#define n_C1 32.7
#define n_Cs1 34.65
#define n_Db1 34.65
#define n_D1 36.71
#define n_Ds1 38.89
#define n_Eb1 38.89
#define n_E1 41.20
#define n_F1 43.65
#define n_Fs1 46.25
#define n_Gb1 46.25
#define n_G1 49.00
#define n_Gs1 51.91
#define n_Ab1 51.91
#define n_A1 55.00
#define n_As1 58.27
#define n_Bb1 58.27
#define n_B1 61.74
#define n_C2 65.41
#define n_Cs2 69.30
#define n_Db2 69.30
#define n_D2 73.42
#define n_Ds2 77.78
#define n_Eb2 77.78
#define n_E2 82.41
#define n_F2 87.31
#define n_Fs2 92.50
#define n_Gb2 92.50
#define n_G2 98.00
#define n_Gs2 103.83
#define n_Ab2 103.83
#define n_A2 110.00
#define n_As2 116.54
#define n_Bb2 116.54
#define n_B2 123.47
#define n_C3 130.81
#define n_Cs3 138.59
#define n_Db3 138.59
#define n_D3 146.83
#define n_Ds3 155.56
#define n_Eb3 155.56
#define n_E3 164.81
#define n_F3 174.61
#define n_Fs3 185.00
#define n_Gb3 185.00
#define n_G3 196.00
#define n_Gs3 207.65
#define n_Ab3 207.65
#define n_A3 220.00
#define n_As3 233.08
#define n_Bb3 233.08
#define n_B3 246.94
#define n_C4 261.63
#define n_Cs4 277.18
#define n_Db4 277.18
#define n_D4 293.66
#define n_Ds4 311.13
#define n_Eb4 311.13
#define n_E4 329.63
#define n_F4 349.23
#define n_Fs4 369.99
#define n_Gb4 369.99
#define n_G4 392.00
#define n_Gs4 415.30
#define n_Ab4 415.30
#define n_A4 440.00
#define n_As4 466.16
#define n_Bb4 466.16
#define n_B4 493.88
#define n_C5 523.25
#define n_Cs5 554.37
#define n_Db5 554.37
#define n_D5 587.33
#define n_Ds5 622.25
#define n_Eb5 622.25
#define n_E5 659.25
#define n_F5 698.46
#define n_Fs5 739.99
#define n_Gb5 739.99
#define n_G5 783.99
#define n_Gs5 830.61
#define n_Ab5 830.61
#define n_A5 880.00
#define n_As5 932.33
#define n_Bb5 932.33
#define n_B5 987.77
#define n_C6 1046.50
#define n_Cs6 1108.73
#define n_Db6 1108.73
#define n_D6 1174.66
#define n_Ds6 1244.51
#define n_Eb6 1244.51
#define n_E6 1318.51
#define n_F6 1394.91
#define n_Fs6 1479.98
#define n_Gb6 1479.98
#define n_G6 1567.98
#define n_Gs6 1661.22
#define n_Ab6 1661.22
#define n_A6 1760.00
#define n_As6 1864.66
#define n_Bb6 1864.66
#define n_B6 1975.53
#define n_C7 2093.00
#define n_Cs7 2217.46
#define n_Db7 2217.46
#define n_D7 2349.32
#define n_Ds7 2489.02
#define n_Eb7 2489.02
#define n_E7 2637.02
#define n_F7 2793.83
#define n_Fs7 2959.96
#define n_Gb7 2959.96
#define n_G7 3135.96
#define n_Gs7 3322.44
#define n_Ab7 3322.44
#define n_A7 3520.00
#define n_As7 3729.31
#define n_Bb7 3729.31
#define n_B7 3951.07
#define n_C8 4186.01
#define n_Cs8 4434.92
#define n_Db8 4434.92
#define n_D8 4698.63
#define n_Ds8 4978.03
#define n_Eb8 4978.03
#define n_E8 5274.04
#define n_F8 5587.65
#define n_Fs8 5919.91
#define n_Gb8 5919.91
#define n_G8 6271.93
#define n_Gs8 6644.88
#define n_Ab8 6644.88
#define n_A8 7040.00
#define n_As8 7458.62
#define n_Bb8 7458.62
#define n_B8 7902.13