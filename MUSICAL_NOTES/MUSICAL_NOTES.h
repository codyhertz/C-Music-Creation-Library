#ifndef MUSICAL_NOTES_H_INCLUDED
#define MUSICAL_NOTES_H_INCLUDED

#include <windows.h>
#include <iostream>
#include <cmath>

class NOTE
{
    public:
        // constructors
        NOTE();
        NOTE(int);
        // public functions
        void note(std::string note,int octave, std::string length); // creates
                                                                    // note
                                                                    // if rest,
                                                                    // make
                                                                    // octave 0
                                                                    // put . at
                                                                    // the end
                                                                    // of length
                                                                    // for extra
                                                                    // half
                                                                    // length
                                                                    // use
                                                                    // numbers
                                                                    // for
                                                                    // length
        void setBPM(int BPMSET); // change the BPM

    private:
        int bpm; // based on 4/4
                 // 100 bpm correlates to 150 on length on beep for quarter
        int songLength; // length of the song
};


#endif // MUSICAL_NOTES_H_INCLUDED
