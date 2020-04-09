#include <iostream>
#include <string>
using namespace std;

int main() {
	int  i,pointer=0,pointerNum,asciiNum, numbers[26] = {0};
	bool isSame = false;
	string receipt;
	cin >> receipt;

	for (i = 0; i < receipt.length(); i++) {
		asciiNum = (int)receipt.at(i);
		if (asciiNum > 96) {
			numbers[asciiNum - 97] += 1;
		}
		else {
			numbers[asciiNum - 65] += 1;
		}
	}
	pointerNum = numbers[0];
	for (i = 1; i < 26; i++) {
		if (pointerNum == numbers[i]) {
			isSame = true;
		}
		else if (pointerNum < numbers[i]) {
			isSame = false;
			pointer = i;
			pointerNum = numbers[i];
		}
	}
	if (isSame) {
		cout << '?';
	}
	else {
		cout << (char)(pointer + 65);
	}
	return 0;
}
