#include <iostream>
#include <time.h>
#include "function.h"
 
using namespace std;
 
int main()
{
#ifdef INTEGER
#   define array1 arrayInt
    cout << "INTEGER mode is selected" << endl;
#endif
#ifdef CHAR
#   define array1 arrayChar
    cout << "CHAR mode is selected" << endl;
#endif
#ifdef DOUBLE
#   define array1 arrayDouble
    cout << "DOUBLE mode is selected" << endl;
#endif
 
 
#ifndef fill
    cout << "Mode is selected more than one or none are selected." << endl;
    return 1;
#elif defined fill
    srand((int)time(NULL));
    int intUserChoice;
    enum UserChoice enumUserChoice;
    int size = 10;
    int* arrayInt = nullptr;
    char* arrayChar = nullptr;
    double* arrayDouble = nullptr;
 
    do
    {
        cout << endl << "Please, enter your choice: " << endl <<
            "0 = Exit" << endl <<
            "1 = Fill Array" << endl <<
            "2 = Print Array" << endl <<
            "3 = Search Min" << endl <<
            "4 = Search Max" << endl <<
            "5 = Sort Array" << endl <<
            "6 = Edit Array" << endl;
        cin >> intUserChoice;
        enumUserChoice = (enum UserChoice) intUserChoice;
 
        switch (enumUserChoice)
        {
        case Exit:
            cout << "You want to quit" << endl;
            break;
        case FillArray:
            fill(array1, size);
            break;
        case PrintArray:
            show(array1, size);
            break;
        case SearchMin:
            searchMin(array1, size);
            break;
        case SearchMax:
            searchMax(array1, size);
            break;
        case SortArray:
            sort(array1, size);
            break;
        case EditArray:
            edit(array1, size);
            break;
        default:
            cout << "Uncorrect choice";
            break;
        }
    } while (enumUserChoice != Exit);
 
    delete[] arrayInt;
    delete[] arrayChar;
    delete[] arrayDouble;
#endif
}