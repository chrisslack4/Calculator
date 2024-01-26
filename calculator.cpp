//Calculator
//CSE 310 Class
//19 January 2024
//Christopher Slack

//This program is a basic calculator that will ask for the input of two 
//numbers then for the math function to be done then display the answer 
//and ask if the user want to repeat the process.

#include <iostream> //start
#include <fstream> //for writing to file
using namespace std;

int main() 
{
    char Function, WriteAnswer, DoAgain;
    int NumberOne, NumberTwo, Result;

//Introduces the calculator
    cout << "Welcome to Calculator! \n \n";

//Loops program to be able to contine doing math
while(true)
{

//Ask for first number variable
    cout << "Please input the first real numeric number you wish to use: \n";
    cin >> NumberOne;

//Ask for the operator that will be used
    cout << "Please input the function or operorater you wish to use ( + - / * ): \n";
    cin >> Function;

    //Function Error
        //Not Addition
        if (Function != '+')
        {
            //Not Subtraction
            if (Function != '-')
            {
                //Not Multiplication
                if (Function != '*')
                {
                    //Not Division
                    if (Function != '/')
                    {
                        cout << "Please input the function or operorater you wish to use from the following list ( + - / * ): \n";
                        cin >> Function;
                    }
                }
            }
        }

//Ask for the second number variable
    cout << "Please input the second number you wish to use: \n";
    cin >> NumberTwo;

//Preform  Math
    //Addition
    if (Function == '+')
    {
        Result = NumberOne + NumberTwo;
    }
    //Subtraction
    else if(Function == '-')
    {
        Result = NumberOne - NumberTwo;
    }
    //Multiplication
    else if(Function == '*')
    {
        Result = NumberOne * NumberTwo;
    }
    //Division
    else if(Function == '/')
    {
        Result = NumberOne / NumberTwo;
    }
    else
    {
        cout << "Outside of bounds of Program \n";
        return 0;
    }

//Print the result
    cout << "The answer of: " << NumberOne << Function << NumberTwo << " is " << Result << "\n";

//Write to File
    //Ask to Write to File
    cout << "Do you wish to write this calculation to a file? (Y/N) \n";
    cin >> WriteAnswer;

    //write condition
    if (WriteAnswer == 'Y')
    {
        //code for writing
        ofstream calculation;
        calculation.open ("calculation.txt");
        calculation << NumberOne << Function << NumberTwo << " is " << Result;
        calculation.close();
        cout << "Calculation written to file. \n";
    }
    else if (WriteAnswer == 'y')
    {
        //code for writing
        ofstream calculation;
        calculation.open ("calculation.txt");
        calculation << NumberOne << Function << NumberTwo << " is " << Result;
        calculation.close();
        cout << "Calculation written to file. \n";
    }
    else if (WriteAnswer == 'n')
    {
        cout << "Thanks for using Calcualtor! \n";
    }
    else
    {
        cout << "Thanks for using Calcualtor! \n";      
    }

    //Run Program Again
    cout << "Do you want to compute another set of numbers? (Y/N) \n";
    cin >> DoAgain;
    if (DoAgain == 'Y' || DoAgain == 'y')
    {
        continue;
    }
    else
    {
        break;
    }
}
    return 0;
}