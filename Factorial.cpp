#include <iostream>
using namespace std;

long factorial(int n) {
    // Return the factorial of n
   long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cin >> num;
    cout << num << "! = " << factorial(num) << endl;
    return 0;
}