// лаб4.6.cpp 
// Вкладені цикли
// Сацик Вікторії
//17 варіант

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S1, S2;
	int k, i;
	S2 = 0;
	k = 1;
	while (k <= 20)
	{
		S1 = 0;
		i = 1;
		while (i <= k)
		{
			S1 += abs(cos(i + k));
			i++;
		}
		S2 += sqrt(sin(1. * k) * sin(1. * k) + S1);
		k++;
	}
	cout << S2 << endl;
	S2 = 0;
	k = 1;
	do
	{
		S1 = 0;
		i = 1;
		do
		{

			S1 += abs(cos(i + k));
			i++;
		} while (i <= k);
		S2 += sqrt(sin(1. * k) * sin(1. * k) + S1);
		k++;
	} while (k <= 20);
	cout << S2 << endl;
	S2 = 0;
	for (k = 1; k <= 20; k++)
	{
		S1 = 0;
		for (i = 1; i <= k; i++)
		{
			S1 += abs(cos(i + k));
		}
		S2 += sqrt(sin(1. * k) * sin(1. * k) + S1);
	}
	cout << S2 << endl;
	S2 = 0;
	for (k = 20; k >= 1; k--
		)

	{
		S1 = 0;
		for (i = k; i >= 1; i--
			)

		{
			S1 += abs(cos(i + k));

		}
		S2 += sqrt(sin(1. * k) * sin(1. * k) + S1);
	}
	cout << S2 << endl;
	return 0;
}
