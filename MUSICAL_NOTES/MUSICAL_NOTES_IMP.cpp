#include "MUSICAL_NOTES.h"

NOTE::NOTE()
{
    bpm=100; // sets to standard bpm
    songLength=0;

}

NOTE::NOTE(int BPMSET)
{
    bpm=BPMSET; // sets to whatever bpm entered

    songLength=0;
}

void NOTE::setBPM(int BPMSET)
{
    bpm=BPMSET; // changes bpm
}

void NOTE::note(std::string note, int octave, std::string length)
{
    double noteB;
    double lengthB;

    // add to the length
    songLength++;

    // makes sure the first character is lower case
    if(note[0]<97)
    {
        note[0]+=32;
    }

    // get frequency
    if(note=="c")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 32.703 * pow(2,(octave-1));
        }

    }
    else if(note=="d")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB = 36.708 * pow(2,(octave-1));
        }
    }
    else if(note=="e")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 41.203 * pow(2,(octave-1));
        }
    }
    else if(note=="f")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 43.654 * pow(2,(octave-1));
        }
    }
    else if(note=="g")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 48.999 * pow(2,(octave-1));
        }
    }
    else if(note=="a")
    {
        if(octave<0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 27.500 * pow(2,(octave));
        }
    }
    else if(note=="b")
    {
        if(octave<0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<8)
        {
            noteB= 30.868 * pow(2,(octave));
        }
    }
    else if(note=="c#"||note=="db")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 34.648 * pow(2,(octave-1));
        }
    }
    else if(note=="d#"||note=="eb")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 38.891 * pow(2,(octave-1));
        }
    }
    else if(note=="f#"||note=="gb")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 46.249 * pow(2,(octave-1));
        }
    }
    else if(note=="g#"||note=="ab")
    {
        if(octave==0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<=8)
        {
            noteB= 51.913 * pow(2,(octave-1));
        }
    }
    else if(note=="a#"||note=="bb")
    {
        if(octave<0||octave>9) // doesnt exist on piano
        {
            std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                      << std::endl;
            return;
        }
        else if(octave<8)
        {
            noteB= 29.135 * pow(2,(octave));
        }
    }
    else if(note=="r")
    {
        noteB=0;
    }
    else
    {
        std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                  << std::endl;
        return;
    }

    // note type
    if(length=="1")
    {
        lengthB=4;
    }
    else if(length=="2")
    {
        lengthB=2;
    }
    else if(length=="4")
    {
        lengthB=1;
    }
    else if(length=="8")
    {
        lengthB=.5;
    }
    else if(length=="16")
    {
        lengthB=.25;
    }
    else if(length=="32")
    {
        lengthB=.125;
    }
    else if(length=="64")
    {
        lengthB=.0625;
    }
    else if(length=="128")
    {
        lengthB=.03125;
    }
    else if(length=="1.")
    {
        lengthB=6;
    }
    else if(length=="2.")
    {
        lengthB=3;
    }
    else if(length=="4.")
    {
        lengthB=1.5;
    }
    else if(length=="8.")
    {
        lengthB=.75;
    }
    else if(length=="16.")
    {
        lengthB=.375;
    }
    else if(length=="32.")
    {
        lengthB=.1875;
    }
    else if(length=="64.")
    {
        lengthB=.09375;
    }
    else
    {
        std::cout << "INVALID NOTE ENTERED AT NOTE: " << songLength
                  << std::endl;
            return;
    }

    Beep(noteB,(60000/(bpm))*(lengthB));


}
