// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void PrintQuestionsAnswers()
{
    cout << "What is the world's fastest species of bird? \n" <<
        "1. Golden Eagle \n" << "2. Peregrine Falcon \n" << "3. Frigatebird \n"
        << "4. Penguin \n";
}

bool isANumber(string in)
{
    for (int i = 0; i < in.length(); i++)
    {
        if (isdigit(in[i]) == false)
        {
            return false;
        }
        return true;
    }
}

void PrintFalconFact()
{
    cout << "The Peregrine Falcon has a top speed of 240 mph when diving\n";
}

int main()
{
    string input;
    int chosenOption;
    bool exit = false;

    do
    {
        cout << "Fast Birds! Press enter to see the question";
        cin.clear();
        cin.ignore(INT32_MAX, '\n');
        system("CLS");

        PrintQuestionsAnswers();
        cin >> input;
        if (isANumber(input))
        {
            chosenOption = stoi(input);

            switch (chosenOption)
            {
            case 1:
                cout << "Almost!\n";
                PrintFalconFact();
                cout << "Press enter to try again";
                cin.get();
                break;
            case 2:
                cout << "Correct!\n";
                PrintFalconFact();
                cout << "Press enter to exit";
                cin.get();
                exit = true;
                break;
            case 3:
                cout << "Not quite!\n";
                PrintFalconFact();
                cout << "Press enter to try again";
                cin.get();
                break;
            case 4:
                cout << "Nope!\n";
                PrintFalconFact();
                cout << "Press enter to try again";
                cin.get();
                break;
            default:
                cout << "That wasn't one of the options...\n";
                cout << "Press enter to try againn";
                cin.get();
                break;
            }
        }
        else
        {
            cout << "You didn't input a number.\n Press enter to try again.\n";
            cin.get();
            PrintQuestionsAnswers();
        }
    } while (!exit);
}