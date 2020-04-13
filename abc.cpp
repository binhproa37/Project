#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int generateRamdomNumber(){
	return rand() % 100 + 1;
}
int getPlayerGuess(){
	int Guess;
	cout << "Enter your Guess (1...100): ";
	cin >> Guess;
	return Guess;
}
void printAnswer(int Guess, int secretNumber){
	if( Guess < secretNumber) cout << " too small\n";
	else if( Guess > secretNumber) cout << " too big\n";
	else cout << "Correct!\n";
}
int dem=0;

int playGuessIt(){
	srand(time(0));
	int secretNumber = generateRamdomNumber();
	int guess;
	do{
		guess = getPlayerGuess();
		printAnswer(guess, secretNumber);
		if(guess != secretNumber) dem++;
	} while (guess != secretNumber);
	cout << "Your point: " << 100-dem << endl;
}		
bool yesno;
int main()
{
    playGuessIt();
    yesno = true;
    while ( yesno )
    {
    cout << "Do you want to play again? (yes=1, no =0): " << endl ;
    cin >> yesno;
    if( yesno==1 ) {
        cout << "Play again:" << endl;
        playGuessIt();
        }
    else {cout <<"END GAME" ; return 0;}
    }

}

