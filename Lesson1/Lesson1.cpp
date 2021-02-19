#include <iostream>
// Для запуска проекта нажать ctrl + f5
// endl - Манипулятор. Манипулятор это объект для управления потоковым вводом выводом
using namespace std;

const double E = 10e-5;

void cos();

int main()
{
	cos();
}

void cos()
{
	double x = 0;
	cout << "What is your argument for cos(x)?";
	cin >> x;
	int c = 1;
	int n = 0;
	double a = 1;
	double p = 1;
	double q = 1;
	double s = 1;
	while (abs(a) > E)

	{
		c *= -1;
		p *= x * x;
		n += 2;
		q *= n * (n - 1);
		a = c * p / q;
		s += a;
	}
	cout << "Your result is ";
	cout << s;
}