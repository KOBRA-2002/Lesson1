#include <iostream>
// Для запуска проекта нажать ctrl + f5
// endl - Манипулятор. Манипулятор это объект для управления потоковым вводом выводом
using namespace std;

const double E = 10e-5;

int main()
{
	double x = 0;
	double s = 0;
	cout << "What is your argument for cos(x)?";
	cin >> x;
	int c = 1;
	int n = 0;
	double a = 1;  
	double p = 1;
	double q = 1;
	while (abs(a) > E)
	{
		s += a;  
		c *= -1;  // Знак слагаемого 
		p *= x * x;  // x^(2n)
		n += 2;
		q *= n;  // 2n! - Двойной факториал 
		a = c * p / q;
		cout << a << endl;
	}
	cout << "Your result is ";
	cout << s;
}