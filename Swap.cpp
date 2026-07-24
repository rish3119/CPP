#include <iostream>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
		string temp;
  
  temp = a;
  a = b;
  b = temp;
  
  cout << a << endl << b << endl;
    // Print them swapped
    return 0;
}
