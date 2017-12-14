/* 
 * File: main.cpp
 * Author: Drake Gerger
 * Purpose: Lo Shu Magic Square
 * Created on November 27, 2017, 3:22 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//User Libraries

//Global Constants
const int SIZE = 3;
int numbers[SIZE][SIZE] {{0, 0, 0},{0, 0, 0},{0, 0, 0}};

//Function Prototypes
void getRandomNums();
void addNumToAray(int);
bool isMagicSquare();
void populateGrid();
void winTest();

//Execution Begins Here!
int main()
{
	int counter = 0;

	do
	{
		counter++;
		cout<<counter<<endl;
		getRandomNums();

		if (counter == 100000)
			break;

		if (counter == 500) //test winning condition (comment this out for production run
			winTest();

	} while (!isMagicSquare());
	
	populateGrid();
	cout<<"Tries to make Lo Shu Magic Square "<<counter<<endl;

	return 0;
}

void populateGrid()
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int c = 0; c < SIZE; c++)
		{
			cout << numbers[i][c] << " ";
		}
		cout << endl;
	}
}

bool isMagicSquare()
{
	int tempSum = numbers[0][0] + numbers[0][1] + numbers[0][2];

	for (int i = 1; i < SIZE; i++)
	{
		if (numbers[i][0] + numbers[i][1] + numbers[i][2] != tempSum)
			return false;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (numbers[0][i] + numbers[1][i] + numbers[2][i] != tempSum)
			return false;
	}
	if (numbers[0][0] + numbers[1][1] + numbers[2][2] != tempSum)
		return false;
	
	if (numbers[0][2] + numbers[1][1] + numbers[2][0] != tempSum)
		return false;
		
	return true;
}

void getRandomNums()
{
	int number = 0;
	int usedNums[] {0, 0, 0, 0, 0, 0, 0, 0, 0};
	srand(time(NULL));
	bool wasNumUsed = true;

	for (int i = 0; i < 9; i++)
	{
		do
		{
			wasNumUsed = true;

			number = rand() % 9 + 1;     //random number between 1 - 9
			if (usedNums[number - 1] == 0)
			{
				usedNums[number - 1] = number;
				wasNumUsed = false;
			}
		} while (wasNumUsed);

		addNumToAray(number);
	}
}

void addNumToAray(int number)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int c = 0; c < SIZE; c++)
		{
			if (numbers[i][c] == 0)
			{
				numbers[i][c] = number;
				return;
			}
		}
	}
}

void winTest()
{
	numbers[0][0] = 4;
	numbers[0][1] = 9;
	numbers[0][2] = 2;
	numbers[1][0] = 3;
	numbers[1][1] = 5;
	numbers[1][2] = 7;
	numbers[2][0] = 8;
	numbers[2][1] = 1;
	numbers[2][2] = 6;
}
