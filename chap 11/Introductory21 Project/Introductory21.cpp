//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double getAverage(double price[], int numElements);

int main()
{
	double prices[10] = {96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9};
	double total = 0.0;
	double average = 0.0;


	cout << fixed << setprecision(2);
	average = getAverage(prices, 10);
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

double getAverage(double price[], int numElements) {
	double total = 0.0;

	for (int sub = 0; sub < numElements; sub++) {
		total += price[sub];
	}

	return total / numElements;
}