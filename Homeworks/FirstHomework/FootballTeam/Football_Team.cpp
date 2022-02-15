// Football_Team.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    unsigned int countOfNumbers;
    cin >> countOfNumbers;
	vector< unsigned int> numbers = {0};
	unsigned int currentNumber = 0;
	for (size_t i = 0; i < countOfNumbers; i++)
	{
		cin >> currentNumber;
		if (currentNumber > 0 ) { 
			numbers.push_back(currentNumber);
		}
	}
	
	sort(numbers.begin(), numbers.end());

	for (size_t i = 0; i < numbers.size(); i++)
	{
		
		if (i == (numbers.size() - 1)) {
			cout << numbers[i] + 1;
			break;
		}
		if (numbers[i + 1]-numbers[i]>1) {
			cout << numbers[i] + 1;
			break;
		}
	}
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
