#include <iostream>

using namespace std;

int main() {
  int n = 3, num[n], max;
  
  for(int i = 0; i < n; i++) {
    cout << "Enter " << i << "th number: ";
    cin << num[i];
    if(i == 0) {
      max = num[i];
    } else {
      if(num[i] > max) {
        max = num[i];
      }
    }
    cout << "\n";
  }
  
  cout << "Max of given numbers is " << max;
  
  return 0;
}
