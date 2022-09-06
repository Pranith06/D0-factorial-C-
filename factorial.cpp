
#include <iostream>
using namespace std;


unsigned int factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}


int main()
{
	int num = 6;
	cout << "Factorial of "
		<< numvariable << " is "
		<< factorial(numvariable) << endl;
	return 0;
}



