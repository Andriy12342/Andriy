#include <iostream>

using namespace std;

double func1(double a, double x, double c) 
{
	return  (- a * x) - c;
}

int func1(int a, int x, int c)
{
	return  (-a * x) - c;
}

double func2(double a, double x, double c) 
{
	return (x - a) / (-c);
}

int func2(int a, int x, int c) 
{
	return (x - a) / (-c);
}

double func3( double x, double b, double a, double c) 
{
	return (b * x) / (c - a); 
}

int func3( int x, int c, int a, int b) 
{
	return (b * x) / (c - a);
}
double findF(double a, double b, double c, double x)
{
	double f;
	if (c < 0 && x != 0)
	{
		f = func1(a, (double)x, b);
	}
	else if (c > 0 && x == 0)
	{
		f = func2(a, (double)x, c);
	}
	else
	{
		f = func3(a, b, (double)x, c);
	}
	return f;
}
int main() {
	double a;
	double b;
	double c;
	double x_finish;
	double x_start;
	double H;
	double F;

	cout << "Please enter a:";
	cin >> a;
	cout << "Please enter b:";
	cin >> b;
	cout << "Please enter c:";
	cin >> c;
	cout << "Please enter x_start:";
	cin >> x_start;
	cout << "Please enter x_finish:";
	cin >> x_finish;
	cout << "Please enter H:";
	cin >> H;
	int ac = (int)a;
	int bc = (int)b;
	int cc = (int)c;

	for (int x = x_start; x < x_finish; x += H)
	{
		if ((ac | bc | cc) != 0) {
			F = findF(a, b, c, x);
		}
		else {
			double xc = (double)x;
			if (c < 0 && x != 0)
			{
				F = func1(ac, (int)x, bc);
			}
			else if (c > 0 && x == 0)
			{
				F = func2(ac, (int)x, cc);
			}
			else
			{
				F = func3(bc, ac,(int)x, cc);
			}
		}
	}
	cout << "F = " << F;
	return 0;

}




