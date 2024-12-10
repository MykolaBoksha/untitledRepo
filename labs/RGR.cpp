// RGR.cpp 
//~;&;*;
//0-9
//A-Z

#include <iostream>
#include <string>
using namespace std;

//perevirka symbol
bool isSymbol(char c) {
	return c == '~' || c == '&' || c == '*';
}
//perevirka chislo
bool isDigital(char c) {
	return c >= '0' && c <= '9';
}
//perevikra liter
bool isLetterInRange(char c) {
	return c >= 'A' && c <= 'Z';
}
//symbol na pochatky
bool IsValidWord(string word) {
	//slovo ne pyste i pochatok z symbola
	if (word.empty() || !isSymbol(word[0])) {
		return false;
	}
    int i = 1;

	//najavnist chisla i poslidovnosti
	while (i < word.size() && isDigital(word[i])) {
		i++;
	}
	if (i == 1) {
		return false;
	}
	//perevirka liter
	while (i < word.size() && isLetterInRange(word[i])) {
		i++;
	}
	if (i == word.size()) {
		return true;
}
	else {
		return false;
	}
}

int main()
{
string word;
cout << "Enter word :";
cin >> word;
if (IsValidWord(word)) {
	cout << "Word is valid";
}
else {
	cout << "Word is NOT valid";
}
	return 0;
}

