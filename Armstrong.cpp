#include <iostream>  
using namespace std;
int main()
{
	int n;
	int sum;
	int remainder;
	cout << "Enter the Number=  \n";
	cin >> n;                                                                  
	int orignal = n;
	for (int i = 0; i=(n>0); ++i)
	{
		remainder = n % 10;
		sum = sum + (remainder * remainder * remainder);
		n = n / 10;
	}
	if (orignal == sum)
	{
		cout << "Armstrong Number." << endl;
	}
	else
	{
		cout << "Not Armstrong Number." << endl;
	}
}