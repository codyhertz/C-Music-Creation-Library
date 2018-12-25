#ifndef SONGLIBRARY_H_INCLUDED
#define SONGLIBRARY_H_INCLUDED
#include "MUSICAL_NOTES.h"
#include <conio.h>
#include <cstdlib>

class songLibrary
{
    public:
        // access song list
        void play(); // shows list of songs and asks which they would
                     // like to hear
    private:
        // songs
        void happyBirthday();
        void runescapeMedieval();
};



#endif // SONGLIBRARY_H_INCLUDED
