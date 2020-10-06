#include <iostream>

using namespace std;

int main() {
  int n = 10, num, max;
  
  for(int i = 0; i < n; i++) {
    cout << "Enter " << i+1 << "th number: ";
    cin >> num;
    if(i == 0) {
      max = num;
    } else {
      if(num > max) {
        max = num;
      }
    }
    cout << "\n";
  }
  
  cout << "Max of given numbers is " << max;
  
  return 0;
}
