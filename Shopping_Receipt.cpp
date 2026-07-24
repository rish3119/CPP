#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item;
    double price;
    int quantity;
    getline(cin, item);
    cin >> price >> quantity;
		double total = 0;
    // Calculate total and print receipt
  	total = price * quantity;
  	cout << "Item: " << item << endl;
  	cout << "Price: $"  << fixed << setprecision(2) << price << endl;
  	cout << "Quantity: " << quantity << endl;
  	cout << "Total: $" << fixed << setprecision(2) << total << endl;
  
    return 0;
}
