#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num, reversed;
	reversed = 0;
	cout << "Enter a number:";
	cin >> num;
	num = num * num;
	while(num != 0)
	{
		reversed = reversed*10 + num % 10;
		num /= 10;
		
	}
	cout << reversed;
	return 0;
}