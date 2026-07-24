#include <iostream>
using namespace std;

int main() {
    int n , i;
    cin >> n;

    // Print multiplication table
  for (i = 1; i <= 10; i++){
    int multi = n * i;
    cout << n << " x " << i << " = " << multi << endl;
  }
    
    return 0;
}