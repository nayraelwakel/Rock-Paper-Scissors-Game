#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int totalRounds = 0;
	int playerScore = 0;
	int computerScore = 0;
	cout << "----- Rock, Paper, Scissors -----" << endl;
	cout << "How many rounds: ";
	cin >> totalRounds;
	for (int round = 1; round <= totalRounds; round++)
	{
		cout <<endl<< "__________ Round " << round << " __________" << endl;
		char playerChoice;
		while (true)
		{
			cout << "Enter your choice (r/p/s): ";
			cin >> playerChoice;
			playerChoice = tolower(playerChoice);
			if (playerChoice == 'r' || playerChoice == 'p' || playerChoice == 's')
			{
				break;
			}
		}
		int randVal = rand() % 3;
		char computerChoice;
		if (randVal == 0)
		{
			computerChoice = 'r';
		}
		else if (randVal == 1)
		{
			computerChoice = 'p';
		}
		else
		{
			computerChoice = 's';
		}
		cout << "Computer choice is: " << computerChoice << endl;
		cout <<endl;
		if (playerChoice == computerChoice)
		{
			cout << "It's a tie!" << endl;
		}
		else if ((playerChoice == 'r' && computerChoice == 's') ||
			(playerChoice == 'p' && computerChoice == 'r') ||
			(playerChoice == 's' && computerChoice == 'p'))
		{
			cout << "You win this round!" << endl;
			playerScore++;
		}
		else 
		{
			cout << "Computer wins this round!" << endl;
			computerScore++;
		}
		cout << "Score -> You: " << playerScore << "  Computer: " << computerScore << endl;
		
	}
	cout <<endl;
    cout << "__________ Final Result __________ " << endl;
		cout << "You: " << playerScore << " | Computer: " << computerScore << endl;

		if (playerScore > computerScore)
		{
			cout << "You win overall!" << endl;
		}
		else if (computerScore > playerScore) 
		{
			cout << "Computer wins overall!" << endl;
		}
		else
		{
			cout << "It's a tie overall!" << endl;
		}
	return 0;
}
