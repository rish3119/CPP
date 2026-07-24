#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // 1. Print lengths
    cout << a.size() << " " << b.size() << endl;

    // 2. Print concatenation
    cout << a + b << endl;

    // 3. Swap first characters
    string a_prime = a;
    string b_prime = b;
    char temp = a_prime[0];
    a_prime[0] = b_prime[0];
    b_prime[0] = temp;

    cout << a_prime << " " << b_prime << endl;
    return 0;
}
