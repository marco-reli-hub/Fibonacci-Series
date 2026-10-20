// 8. Write a code that will display the first n terms of the Fibonacci series.

#include <iostream>
using namespace std;

int main() 
{
	int fibonacci;
	int fib_0, fib_1 = -1, fib_2 = 1;

	cout << "Enter a number: ";
	cin >> fibonacci;

	int fib = fibonacci;
	cout << "The Fibonacci Series: ";
	do {
		fib_0 = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib_0;
		cout << fib_0 << "  ";
		fibonacci--;
	} while (fibonacci > 0);
	cout << endl << "The " << fib << "th Term: " << fib_0 << endl;

	return 0;
}
