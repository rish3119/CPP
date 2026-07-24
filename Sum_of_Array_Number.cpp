#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
 
  vector <int> array(n);
  for ( int i = 0 ; i < n; i++){
    
   cin >> array[i];
    
  }
    // Read numbers and calculate sum
   long sum = 0;
  for (int i = 0 ; i < n; i++){
    sum += array[i];
    }
  
		cout << "Sum: " << sum << endl;
    // Print the sum
    return 0;
}
