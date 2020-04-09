#include <iostream>
using namespace std;

int main() {
	int  ax, bx, cx, ay, by, cy, area;
	cin >> ax >> ay >> bx >> by >> cx >> cy;
	bx -= ax;
	cx -= ax;
	by -= ay;
	cy -= ay;
	area = bx * cy - cx * by;
	if (area == 0) {
		cout << '0';
	}
	else if (area > 0) {
		cout << '1';
	}
	else {
		cout << "-1";
	}
	return 0;
}
