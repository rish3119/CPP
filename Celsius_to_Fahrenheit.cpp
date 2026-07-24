#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int celsius = 20;
    cin >> celsius;
    // Calculate fahrenheit
    double  fahrenheit =(celsius * 9.0/5.0 ) + 32.0 ;
    // Print the results
 		cout << celsius << " Celsius = "<< fixed << setprecision(1) << fahrenheit << " Fahrenheit " << endl;
    
  return 0;
}