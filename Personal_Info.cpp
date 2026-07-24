#include <iostream>
using namespace std;

int main() {
    string name, age, city;
    getline(cin, name);
    getline(cin, age);
    getline(cin, city);

    // Print the info
  cout << "Name: " << name << endl << "Age: " << age << endl << "City: " << city << endl;
    
  return 0;
}
