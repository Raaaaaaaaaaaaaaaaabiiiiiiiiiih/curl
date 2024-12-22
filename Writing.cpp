#include <iostream>
#include <ctime>
#include <windows.h>
// using namespace std;

const int MIN = 1;
const int MAX = 100;
int answer = (rand() % MAX) + MIN;

void quit(){
	textcolor(GREEN);
	std::cout << "\nYou Quit!\n";
}

void reveal_answer(){
	textcolor(BLUE);
	std::cout << "Answer: " << answer;
}

int main(){
	srand(time(0));
	
	int guesses = 0;
	int guess;
	
	do{
		std::cout << "Num? " << MIN << "~" << MAX << "  (-123456 to quit | -123457 to reveal the answer):\t";
		std::cin >> guess;
		
		if(guess == -123456){
			quit();
		}
		else if(guess == -123457){
			reveal_answer();
		}
		if(guess > answer){
			std::cout << "\nToo High!\n\n";
		}
		else if(guess < answer){
			std::cout << "\nToo Low!\n\n";
		}
		guesses++;
	}while(guess != answer);
	
	textcolor(BLUE);
	textbackground(WHITE);
	
	std::cout << "\nCongratulations!\n\n";
	if(guesses == 1){
		std::cout << "1 GUESS!!\n";
		std::cout << "SCORE: PERFECT (BY PURE LUCK)\n\n";
	}
	else {
		std::cout << "GUESSES: " << guesses << "\n";
		if(guesses <= 15){
			std::cout << "SCORE: OPPA GAMNAM STYLE (A)\n\n";
		}
		else if(guesses <= 35){
			std::cout << "SCORE: YOU GET DA *B*, FAILURE (actually it's a *C*)\n\n";
		}
		else if(guesses <= 55){
			std::cout << "SCORE: USE LOGIC (D)\n\n";
		}
		else if(guesses <= 115){
			std::cout << "SCORE: BRUH (F--)\n\n";
		}
		else{
			std::cout << "SCORE: NEVER PLAY THIS GAME AGAIN (F--------------------------------------------------- | instead of getting a 0 you get a Negative Infinity)\n\n";
		}
	}
	textcolor(WHITE);
	textbackground(BLACK);
	
	return 0;
}