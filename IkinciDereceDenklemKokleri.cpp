#include <iostream>
using namespace std;

int main()
{
	int A, B, C; 
	double delta, X1, X2;
	cout << "Lutfen A Katsayisini Giriniz: ";
	cin >> A;
	cout << "Lutfen B Katsayisini Giriniz: ";
	cin >> B;
	cout << "Lutfen C Sabitini Giriniz: ";
	cin >> C;
	delta = B * B - 4 * A * C;
	if (A == 0)
	{
		cout << "Bu denklem ikinci dereceden degildir.";
	}
	else if (delta < 0)
	{
		cout << "Bu denklemin gercek koku yok";
	}
	else if (delta == 0)
	{
		cout << "Bu denklemin cift katli koku vardir\n";
		cout << "Kok = " << -B / (2 * A);
	}
	else
	{
		cout << "Bu denklemin iki tane koku vardir\n";
		X1 = (-B + sqrt(delta)) / (2 * A);
		X2 = (-B - sqrt(delta)) / (2 * A);
		cout << "1. Kok = " << X1 << endl;
		cout << "2. Kok = " << X2 << endl;
	}
	return 0;
}