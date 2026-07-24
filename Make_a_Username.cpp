#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string firstName, lastName;
    getline(cin, firstName);
    getline(cin, lastName);

    // Create username (lowercase, no space)
    string userName = firstName + lastName;
  	transform(userName.begin(), userName.end(), userName.begin(), ::tolower);
    // Create initials (uppercase first letters)
      cout << "Username: " << userName << endl;
      cout << "Initials: " << firstName[0] << lastName[0] << endl;

    // Print results
    retRishavurn 0;
}