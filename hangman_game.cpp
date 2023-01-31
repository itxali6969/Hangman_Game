#include <iostream>
#include <string>

using namespace std;

int main() {
const int MAX_TRIES = 6;//intialized a const integer which will never be changed in the entire programe
string word = "computer";
int wrong_guesses = 0;
string guessed(word.size(), '_');
while (wrong_guesses < MAX_TRIES && guessed != word)//here is a while loop for the entire condition
 {
cout << "\nHere is the word you have to guess: " << guessed << endl;
cout << "\n\nYou are supposed to guess in " << MAX_TRIES - wrong_guesses << " or less attempts.";
cout << "\n\nType a letter in the word or $ to skip the rest of the guess attempts and type the complete word you want to guess." << endl;
cout << "\nEnter your guess #" << wrong_guesses + 1<< ":";
char guess;
cin >>guess;
if (guess == '$') //in this program a lot of if statements that all are used for certain simple conditions
{
break;
}
bool correct_guess = false; 
for (int i = 0; i < word.size(); i++)//for loop is used for repeating and incrementing  untile the condition becomes false
 {
if (word[i] == guess) {
guessed[i] = guess;
correct_guess = true;
}
}
if (!correct_guess) {
wrong_guesses++;
}
}
if (guessed == word) {
cout << "\n\nCongrats! You have guessed it correctly in just " << wrong_guesses << " attempts." << endl;
} else {
cout << "\nYou have no more guess attempts left so now you have to type in the complete word you think it would be: " << endl;
cout << "\nEnter your word here: ";
 string player_word;
 cin >>player_word;
if (player_word == word) {
cout << "\nCongrats! You have guessed it correctly." << endl;
} else {
cout << "\nSorry, the word was " << word << endl;
}
}
return 0;
}
