#include "songLibrary.h"

void songLibrary::play()
{

    bool continueList=true;
    int choice=0;
    std::string continueL="\0";
    bool notValid=false;

    do
    {
        std::cout << "The current list of songs is: "
                  << "\n\t1: Happy Birthday"
                  << "\n\t2: Runescape's Medieval"
                  << "\nPlease choose which song you would like to play: ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
                happyBirthday();

                do
                {
                    std::cout << "Would you like to hear another song?(Y/N)\n";
                    std::cin >> continueL;

                    if(continueL.length()>1)
                    {
                        std::cout << "Invalid input. Please try again.\n\n";
                        notValid=true;
                    }
                    else if(continueL!="n"&&continueL!="N"&&continueL!="Y"&&continueL!="y")
                    {
                       std::cout << "Invalid input. Please try again.\n\n";
                        notValid=true;
                    }
                }while(notValid);

                if(continueL=="n"||continueL=="N")
                {
                    continueList=false;
                }
                else
                {
                    system("cls");
                }

                break;
            case 2:
                runescapeMedieval();

                do
                {
                    std::cout << "Would you like to hear another song?(Y/N)\n";
                    std::cin >> continueL;

                    if(continueL.length()>1)
                    {
                        std::cout << "Invalid input. Please try again.\n\n";
                        notValid=true;
                    }
                    else if(continueL!="n"&&continueL!="N"&&continueL!="Y"&&continueL!="y")
                    {
                       std::cout << "Invalid input. Please try again.\n\n";
                        notValid=true;
                    }
                }while(notValid);

                if(continueL=="n"||continueL=="N")
                {
                    continueList=false;
                }
                else
                {
                    system("cls");
                }

                break;
            default:
                std::cout << "Sorry this song does not exist on the list.\n\n";
                system("cls");
                break;
        }
    }while(continueList);
}

void songLibrary::happyBirthday()
{
    NOTE song(85);

    song.note("r",0,"2");
    song.note("c",4,"4.");
    song.note("c",4,"8");
    song.note("d",4,"4");
    song.note("c",4,"4");
    song.note("f",4,"4");
    song.note("e",4,"2");
    song.note("c",4,"4.");
    song.note("c",4,"8");

    song.note("d",4,"4");
    song.note("c",4,"4");
    song.note("g",4,"4");
    song.note("f",4,"2");
    song.note("c",4,"4.");
    song.note("c",4,"8");

    song.note("c",5,"4");
    song.note("a",4,"4");
    song.note("f",4,"4");
    song.note("e",4,"4");
    song.note("d",4,"4");
    song.note("bb",4,"4.");
    song.note("bb",4,"8");


    song.note("a",4,"4");
    song.note("f",4,"4");
    song.note("g",4,"4");
    song.note("f",4,"2");
}

void songLibrary::runescapeMedieval()
{
    NOTE song(150);

    // first staff
    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("f",2,"2.");
    song.note("r",0,"4");
    song.note("f",3,"4");
    song.note("f",3,"2");
    song.note("c",3,"2.");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("g",3,"2.");
    song.note("g",3,"2.");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");


    // staff 2
    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    song.note("c",5,"8");
    song.note("bb",4,"8");
    song.note("g",4,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("g",5,"1");
    song.note("r",0,"4");
    song.note("r",0,"4");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    // staff 3
    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    song.note("c",5,"8");
    song.note("bb",4,"8");
    song.note("g",4,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("c",6,"8");
    song.note("g",5,"16");
    song.note("f",5,"16");
    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"4");
    song.note("ab",4,"4");

    song.note("c",5,"2.");

    song.note("r",0,"1");

    song.note("g",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("g",5,"8");

    // staff 4

    song.note("f",5,"8");
    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("d",5,"8");

    song.note("g",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("g",5,"8");

    song.note("a",5,"8");
    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("eb",5,"8");
    song.note("c",4,"8");
    song.note("c",4,"8");

    song.note("g",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("g",5,"8");

    song.note("a",5,"8");
    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("eb",5,"8");
    song.note("g",5,"8");
    song.note("d",5,"8");

    song.note("c",5,"4");
    song.note("g",4,"2");

    song.note("g",4,"2");
    song.note("r",0,"4");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    // staff 5

    song.note("c",5,"8");
    song.note("bb",4,"8");
    song.note("g",4,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("g",5,"1");
    song.note("r",0,"2");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",4,"8");
    song.note("d",4,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    // staff 6

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("c",6,"8");
    song.note("g",5,"16");
    song.note("f",5,"16");
    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"4");
    song.note("ab",4,"4");

    song.note("c",5,"2.");

    song.note("r",0,"1");

    song.note("g",6,"16");
    song.note("f",6,"16");
    song.note("eb",6,"8");
    song.note("d",6,"8");
    song.note("c",6,"8");
    song.note("d",6,"8");
    song.note("eb",6,"8");

    song.note("d",6,"2.");

    song.note("eb",6,"16");
    song.note("d",6,"16");
    song.note("eb",6,"8");
    song.note("c",6,"8");
    song.note("d",6,"8");
    song.note("eb",6,"8");
    song.note("d",6,"8");

    song.note("f",6,"2");
    song.note("eb",6,"8");
    song.note("f",6,"8");
    song.note("g",6,"2.");

    // staff 7

    song.note("g",6,"2.");

    song.note("g",6,"2.");

    song.note("g",6,"4");
    song.note("r",0,"2");

    song.note("g",6,"16");
    song.note("f",6,"16");
    song.note("eb",6,"8");
    song.note("d",6,"8");
    song.note("c",6,"8");
    song.note("d",6,"8");
    song.note("eb",6,"8");

    song.note("d",6,"2.");

    song.note("eb",6,"16");
    song.note("d",6,"16");
    song.note("eb",6,"8");
    song.note("c",6,"8");
    song.note("d",6,"8");
    song.note("eb",6,"8");

    song.note("f",6,"2");
    song.note("eb",6,"8");
    song.note("f",6,"8");

    song.note("g",5,"2.");
    song.note("g",5,"2.");
    song.note("g",5,"2.");
    song.note("g",5,"4");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    //staff 8

    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    song.note("c",5,"8");
    song.note("bb",4,"8");
    song.note("g",4,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("g",5,"1");
    song.note("r",0,"4");
    song.note("r",0,"4");

    song.note("c",5,"8");
    song.note("b",4,"8");
    song.note("c",4,"8");
    song.note("d",4,"8");
    song.note("eb",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("d",5,"16");
    song.note("eb",5,"16");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");
    song.note("eb",5,"8");

    // staff 9


    song.note("c",5,"8");
    song.note("bb",4,"8");
    song.note("g",4,"8");
    song.note("b",4,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("g",4,"4");
    song.note("f",4,"2");

    song.note("c",6,"8");
    song.note("g",4,"16");
    song.note("f",4,"16");
    song.note("eb",5,"8");
    song.note("d",5,"8");
    song.note("c",5,"8");
    song.note("d",5,"8");

    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"4");
    song.note("b",4,"4");

    song.note("c",5,"2.");

    song.note("r",0,"2.");
    // stops before 16th notes portion

    song.note("bb",5,"16");
    song.note("f",5,"16");
    song.note("bb",5,"16");
    song.note("d",5,"16");
    song.note("f",5,"16");
    song.note("bb",4,"16");
    song.note("d",5,"16");
    song.note("f",4,"16");
    song.note("bb",4,"16");
    song.note("d",4,"16");
    song.note("f",4,"16");

    song.note("bb",3,"16");
    song.note("d",4,"16");
    song.note("d",4,"16");
    song.note("bb",3,"16");
    song.note("f",4,"16");
    song.note("d",4,"16");
    song.note("bb",4,"16");
    song.note("f",4,"16");
    song.note("d",5,"16");
    song.note("bb",4,"16");
    song.note("f",5,"16");
    song.note("d",4,"16");

    // staff 10

    song.note("c",6,"16");
    song.note("f",5,"16");
    song.note("g",5,"16");
    song.note("c",6,"16");
    song.note("e",5,"16");
    song.note("g",5,"16");
    song.note("c",5,"16");
    song.note("e",5,"16");
    song.note("g",4,"16");
    song.note("c",5,"16");
    song.note("e",4,"16");
    song.note("g",4,"16");

    song.note("c",4,"16");
    song.note("e",4,"16");
    song.note("e",4,"16");
    song.note("c",4,"16");
    song.note("g",4,"16");
    song.note("e",4,"16");
    song.note("c",5,"16");
    song.note("g",4,"16");
    song.note("e",5,"16");
    song.note("c",5,"16");
    song.note("g",5,"16");
    song.note("e",5,"16");

    song.note("bb",5,"16");
    song.note("g",5,"16");
    song.note("f",5,"16");
    song.note("bb",5,"16");
    song.note("d",5,"16");
    song.note("f",5,"16");
    song.note("bb",4,"16");
    song.note("d",5,"16");
    song.note("f",4,"16");
    song.note("bb",4,"16");
    song.note("d",4,"16");
    song.note("f",4,"16");

    song.note("b",3,"16");
    song.note("d",4,"16");
    song.note("d",4,"16");
    song.note("b",3,"16");
    song.note("f",4,"16");
    song.note("d",4,"16");
    song.note("bb",4,"16");
    song.note("f",4,"16");
    song.note("d",5,"16");
    song.note("bb",4,"16");
    song.note("g",5,"16");
    song.note("d",5,"16");

    song.note("c",6,"16");
    song.note("g",5,"16");
    song.note("g",5,"16");
    song.note("c",6,"16");
    song.note("e",5,"16");
    song.note("g",5,"16");
    song.note("c",5,"16");
    song.note("e",5,"16");
    song.note("g",4,"16");
    song.note("c",5,"16");
    song.note("e",4,"16");
    song.note("g",4,"16");

    // staff 11

    song.note("c",4,"16");
    song.note("e",4,"16");
    song.note("e",4,"16");
    song.note("c",4,"16");
    song.note("g",4,"16");
    song.note("e",4,"16");
    song.note("c",5,"16");
    song.note("g",4,"16");
    song.note("e",5,"16");
    song.note("c",5,"16");
    song.note("g",5,"16");
    song.note("e",5,"16");

    song.note("bb",5,"16");
    song.note("g",5,"16");
    song.note("f",5,"16");
    song.note("bb",5,"16");
    song.note("d",5,"16");
    song.note("f",5,"16");
    song.note("bb",4,"16");
    song.note("d",5,"16");
    song.note("f",4,"16");
    song.note("bb",4,"16");
    song.note("d",4,"16");
    song.note("f",4,"16");

    song.note("b",3,"16");
    song.note("d",4,"16");
    song.note("d",4,"16");
    song.note("b",3,"16");
    song.note("f",4,"16");
    song.note("d",4,"16");
    song.note("bb",4,"16");
    song.note("f",4,"16");
    song.note("d",5,"16");
    song.note("bb",4,"16");
    song.note("bb",5,"16");
    song.note("d",5,"16");

    song.note("c",6,"16");
    song.note("bb",5,"16");
    song.note("g",5,"16");
    song.note("c",6,"16");
    song.note("e",5,"16");
    song.note("g",5,"16");
    song.note("c",5,"16");
    song.note("e",5,"16");
    song.note("g",4,"16");
    song.note("c",5,"16");
    song.note("e",4,"16");
    song.note("g",4,"16");

    song.note("c",4,"16");
    song.note("e",4,"16");
    song.note("e",4,"16");
    song.note("c",4,"16");
    song.note("g",4,"16");
    song.note("e",4,"16");
    song.note("c",5,"16");
    song.note("g",4,"16");
    song.note("e",5,"16");
    song.note("c",5,"16");
    song.note("g",5,"16");
    song.note("e",5,"16");

    // staff 12

    song.note("bb",5,"16");
    song.note("g",5,"16");
    song.note("f",5,"16");
    song.note("bb",5,"16");
    song.note("d",5,"16");
    song.note("f",5,"16");
    song.note("bb",4,"16");
    song.note("d",5,"16");
    song.note("f",4,"16");
    song.note("bb",4,"16");
    song.note("d",4,"16");
    song.note("f",4,"16");

    song.note("b",3,"16");
    song.note("d",4,"16");
    song.note("d",4,"16");
    song.note("b",3,"16");
    song.note("f",4,"16");
    song.note("d",4,"16");
    song.note("bb",4,"16");
    song.note("f",4,"16");
    song.note("d",5,"16");
    song.note("bb",4,"16");
    song.note("f",5,"16");
    song.note("d",5,"16");

    song.note("c",6,"16");
    song.note("f",5,"16");
    song.note("g",5,"16");
    song.note("c",6,"16");
    song.note("e",5,"16");
    song.note("g",5,"16");
    song.note("c",5,"16");
    song.note("e",5,"16");
    song.note("g",4,"16");
    song.note("c",5,"16");
    song.note("e",4,"16");
    song.note("g",4,"16");

    song.note("c",4,"16");
    song.note("e",4,"16");
    song.note("e",4,"16");
    song.note("c",4,"16");
    song.note("g",4,"16");
    song.note("e",4,"16");
    song.note("c",5,"16");
    song.note("g",4,"16");
    song.note("e",5,"16");
    song.note("c",5,"16");
    song.note("g",5,"16");
    song.note("e",5,"16");

    song.note("f",3,"2.");
    song.note("r",0,"4");
    song.note("f",4,"4");
    song.note("f",4,"4");

    song.note("db",3,"2.");
    song.note("r",0,"4");
    song.note("db",4,"4");
    song.note("db",4,"4");

    // staff 13

    song.note("f",3,"2.");
    song.note("r",0,"4");
    song.note("f",4,"4");
    song.note("f",4,"4");

    song.note("bb",2,"2.");
    song.note("r",0,"4");
    song.note("bb",3,"4");
    song.note("bb",3,"4");

    song.note("f",3,"2.");
    song.note("r",0,"4");
    song.note("f",4,"4");
    song.note("f",4,"4");

    song.note("db",3,"2.");
    song.note("r",0,"4");
    song.note("db",4,"4");
    song.note("db",4,"4");

    song.note("c",4,"2.");
    song.note("c",4,"2.");

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    song.note("a",5,"8");
    song.note("g",5,"16");
    song.note("a",5,"16");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");

    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("c",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"4");
    song.note("bb",4,"2");

    // staff 14

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    song.note("a",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"1");

    song.note("r",0,"4");
    song.note("r",0,"4");

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    song.note("a",5,"8");
    song.note("g",5,"16");
    song.note("a",5,"16");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");

    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("c",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"4");
    song.note("bb",4,"2");

    song.note("f",6,"8");
    song.note("c",6,"16");
    song.note("bb",5,"16");
    song.note("a",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    // staff 15
    song.note("a",5,"8");
    song.note("bb",5,"8");
    song.note("c",5,"4");
    song.note("e",5,"4");

    song.note("f",5,"2.");

    song.note("r",0,"2.");

    song.note("c",6,"8");
    song.note("c",6,"8");
    song.note("bb",5,"8");
    song.note("bb",5,"8");
    song.note("c",6,"8");
    song.note("c",6,"8");

    song.note("bb",5,"8");
    song.note("bb",5,"8");
    song.note("a",5,"8");
    song.note("a",5,"8");
    song.note("g",5,"8");
    song.note("g",5,"8");

    song.note("c",6,"8");
    song.note("c",6,"8");
    song.note("bb",5,"8");
    song.note("bb",5,"8");
    song.note("c",6,"8");
    song.note("c",6,"8");

    song.note("d",6,"8");
    song.note("bb",5,"8");
    song.note("a",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");
    song.note("f",5,"8");

    // staff 16
    song.note("c",6,"8");
    song.note("c",6,"8");
    song.note("bb",5,"8");
    song.note("bb",5,"8");
    song.note("c",6,"8");
    song.note("c",6,"8");

    song.note("d",6,"8");
    song.note("bb",5,"8");
    song.note("a",5,"8");
    song.note("a",5,"8");
    song.note("d",6,"8");
    song.note("g",5,"8");

    song.note("f",5,"8");
    song.note("c",4,"1");
    song.note("r",0,"4");

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    song.note("a",5,"8");
    song.note("g",5,"16");
    song.note("a",5,"16");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");

    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("c",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"4");
    song.note("bb",4,"2");

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    // staff 17

    song.note("a",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"1");

    song.note("r",0,"4");
    song.note("r",0,"4");

    song.note("f",5,"8");
    song.note("e",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");
    song.note("f",5,"8");

    song.note("a",5,"8");
    song.note("g",5,"16");
    song.note("a",5,"16");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");
    song.note("a",5,"8");

    song.note("f",5,"8");
    song.note("eb",5,"8");
    song.note("c",5,"8");
    song.note("eb",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    song.note("c",5,"4");
    song.note("bb",4,"2");

    song.note("f",6,"8");
    song.note("c",6,"16");
    song.note("bb",5,"16");
    song.note("a",5,"8");
    song.note("g",5,"8");
    song.note("f",5,"8");
    song.note("g",5,"8");

    // staff 18
    song.note("a",5,"8");
    song.note("bb",5,"8");
    song.note("c",6,"4");
    song.note("e",5,"4");

    song.note("f",5,"2.");

    song.note("r",0,"2.");

    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("f",2,"2.");
    song.note("r",0,"4");
    song.note("f",3,"4");
    song.note("f",3,"2");
    song.note("c",3,"2.");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("g",3,"2.");

    // staff 19
    song.note("g",3,"2.");

    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("c",3,"2.");
    song.note("r",0,"4");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("f",2,"2.");
    song.note("r",0,"4");
    song.note("f",3,"4");
    song.note("f",3,"2");
    song.note("c",3,"2.");
    song.note("c",4,"4");
    song.note("c",4,"4");

    song.note("ab",2,"2.");
    song.note("r",0,"4");
    song.note("ab",3,"4");
    song.note("ab",3,"4");

    song.note("g",3,"2.");
    song.note("g",3,"2.");


}
