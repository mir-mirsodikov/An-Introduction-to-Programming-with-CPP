//Mukhammad Mirsodikov - P2

//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	const double RATE = 0.1;
	string name = "";
	int price = 0;
	double premium = 0.0;
	string itemNum = "";

	cout << "Buyer's name: ";
	getline(cin, name);
	cout << "Purchase price: ";
	cin >> price;
	cin.ignore(100, '\n');
	cout << "Item number: ";
	getline(cin, itemNum);

	premium = price * RATE;

	cout << fixed << setprecision(2);
	cout << "********Auction Summary********" << endl;
	cout << "Buyer: " << name << endl;
	cout << "Premium for item " << itemNum << ": $" << premium << endl;

	system("pause");
	return 0;
}