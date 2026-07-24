#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    getline(cin, name);
    cin >> age;

    // Check and print
  if (age >= 18){
  
    cout << name << " can vote" << endl;
  } else {
    cout << name << " cannot vote" << endl;
  }
  
    return 0;
}