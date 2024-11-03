// PEREGRUZKAINKREMENTA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

class Drob 
{
	float znamntl;
	float chislit;
public:
	Drob(int a, int b) 
	{
		znamntl = b;
		chislit = a;

		if (b == 0) 
		{
			cout << "error";
		}
	}

	Drob() 
	{
		znamntl = 1;
		chislit = 0;
	}

	void Rand() 
	{
		srand(time(0));
		znamntl = rand() % 100 + 3;
		chislit = rand() % 100 + 3;
	}

	void Show() 
	{
		cout << chislit << "/" << znamntl << " = " << chislit / znamntl << endl;
	}
	Drob operator+(int x) 
	{
		znamntl = znamntl + x;
		chislit = chislit + x;

	}
	Drob operator+(Drob* obj) 
	{
		znamntl = znamntl + obj->znamntl;
		chislit = chislit + obj->chislit;
	}
	Drob operator-(int x) 
	{
		znamntl = znamntl - x;
		chislit = chislit - x;

	}
	Drob operator-(Drob* obj) 
	{
		znamntl = znamntl - obj->znamntl;
		chislit = chislit - obj->chislit;
	}
	Drob operator/(int x) 
	{
		znamntl = znamntl / x;
		chislit = chislit / x;

	}
	Drob operator/(Drob* obj) 
	{
		znamntl = znamntl / obj->znamntl;
		chislit = chislit / obj->chislit;
	}
	Drob operator*(int x) 
	{
		znamntl = znamntl * x;
		chislit = chislit * x;

	}
	Drob operator*(Drob* obj) 
	{
		znamntl = znamntl * obj->znamntl;
		chislit = chislit * obj->chislit;
	}
};
int main()
{
	srand(time(0));
	Drob f(10, 10);
	f.Show();
}