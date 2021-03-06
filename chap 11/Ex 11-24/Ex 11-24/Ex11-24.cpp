//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void getSearchResults(int[], int, int, int &, int &);

int main() {
	int pollResults[25] = { 35, 120, 75, 60, 20,
						   25, 15, 90, 85, 35,
						   60, 15, 10, 25, 60,
						   100, 90, 10, 120, 5,
						   40, 70, 30, 25, 5 };
	int minutes = 0;
	int numOver = 0;
	int total = 0;
	double average = 0.0;

	cout << "Search for minutes over: ";
	cin >> minutes;

	getSearchResults(pollResults, 25, minutes, numOver, total);

	average = static_cast<double>(total) / numOver;

	cout << endl << "Number who spend more than " << minutes << " minutes" << endl;
	cout << "per day on Facebook: " << numOver << endl;
	cout << "Average time spent: " << fixed << setprecision(1) << average << endl;
	system("pause");
	return 0;
}

void getSearchResults(int results[], int numElements, int mins, int &over, int &total) {
	
	for (int sub = 0; sub < numElements; sub++)
		if (results[sub] > mins) {
			over += 1;
			total += results[sub];
		}
			
}