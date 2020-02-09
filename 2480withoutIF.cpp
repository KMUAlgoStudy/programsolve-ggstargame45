#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	bool isSame[4];
	bool isBig[3];
		cin >> a >> b >> c;

		isSame[0] = a == b;
		isSame[1] = b == c;
		isSame[2] = a == c;
		isSame[3] = isSame[0] && isSame[1];
		isBig[0] = (a > b) && (a > c);
		isBig[1] = (b > a) && (b > c);
		isBig[2] = (c > a) && (c > b);

		cout <<
			isSame[3] * (10000 + a * 1000) + ((!isSame[3]) && (isSame[0] || isSame[1] || isSame[2])) * (1000 + isSame[0]*a * 100+isSame[1]*b*100+isSame[2]*c*100) + (!isSame[0] && !isSame[1] && !isSame[2]) * (isBig[0] * a * 100 + isBig[1] * b * 100 + isBig[2] * c * 100);
}