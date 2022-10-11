#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;

	cout << "x = "; cin >> x;

	if (x <= -4)
		y = -2;
	else
		if (x > -4 && x < 0)
			y = -1 + (x + 4) / 4;
		else
			if (x >= 0 && x <= 2)
				y = x * x;
			else
				y = 4 + (-1) * (x - 2) / 2;

	cout << "y = " << y << endl;

	return 0;

}
