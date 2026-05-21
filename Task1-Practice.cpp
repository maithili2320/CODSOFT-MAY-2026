#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));//For generating Random number
	int secretNumber= rand()% 100+1;//Random number between 1 to 100
	int guess;
	int attempts=0;
	
	cout << "==NUMBER GUESSING GAME==="<< endl;
	cout << "I have selected a number between 1 and 100.Try to guess it"<<endl;
	
	do{
		cout << "\nEnter your guess:";
		cin >> guess;
		attempts++;
		
		if(guess > secretNumber){
			cout << "Too high! Try a smaller number.";
		}
		else if(guess < secretNumber){
			cout << "Too low!Try a larger number.";
		}
		else {
			cout << "\nCongratulations! You guessed it in"<< attempts<<"attempts!????";
		}
	}while(guess != secretNumber);
	
	cout<< "\n\nThank you for playing!"<<endl;
	return 0;
}
