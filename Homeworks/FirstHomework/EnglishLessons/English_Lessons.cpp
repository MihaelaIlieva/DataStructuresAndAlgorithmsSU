// English_Lessons.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string word;
    getline(cin, word);
    unsigned int numberOfSymbols;
    cin >> numberOfSymbols;
    char wantedSymbol;
    cin >> wantedSymbol;

    int counter = 0;
    
    int finalResult = 0;

    int symbolsLeft = numberOfSymbols % word.size();

    if (numberOfSymbols >= word.size()) {
        int timesOfRepetition = numberOfSymbols/word.size();
        for (size_t i = 0; i < word.size(); i++)
        {
            if (word[i] == wantedSymbol) {
                    counter++;
            }
        }
        finalResult = timesOfRepetition * counter;
        if (symbolsLeft > 0) {
            counter = 0;
            for (size_t i = 0; i < symbolsLeft; i++)
            {
                if (word[i] == wantedSymbol) {
                    counter++;
                }
            }
            finalResult += counter;
        }        
    }
    else {
        for (size_t i = 0; i < symbolsLeft; i++)
        {
            if (word[i] == wantedSymbol) {
                counter++;
            }
        }
        finalResult += counter;
    }
    cout << finalResult;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
