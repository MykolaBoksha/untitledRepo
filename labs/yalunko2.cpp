//student: Mykola Boksha
//group: 121


#include <iostream>
#include <locale>
#include <cstdlib> 
#include <ctime> 
#include <string>
using namespace std;

string getRandomColor() {
	int colorCode = rand() % 8 + 30;
	return "\033[" + to_string(colorCode) + "m";
}


string resetColor() {
	return "\033[0m";
}

int main() {
	setlocale(0, "");
	srand(time(0));
	int heigh;
	cout << "введiть висоту ялинки" << endl;

	cin >> heigh;

	int j;
	int z;


	int i;
	for (i = 1; i <= heigh; i++) {

		for (j = 0; j < heigh - i; j++) {
			cout << " ";
		}
		for (z = 0; z < i * 2 - 1; z++) {
			char randomChar = '!' + rand() % 94;
			cout << getRandomColor() << randomChar << resetColor();
		}
		cout << endl;
	}
	return 0;
}