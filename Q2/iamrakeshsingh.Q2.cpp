#include <iostream>

using namespace std;

int main() {
  int n;  
  cout << "Enter number: ";   cin >> n;
  
  if(n % 2 == 0) {
    cout << "The given number is even.\n";
  } else {
    cout << "The given number is odd.\n";
  }
  
  return 0;
}
