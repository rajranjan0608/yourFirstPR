#include<bits/stdc++.h>

using namespace std;

int main(){
    cout << "Enter the number: ";
    int n;
    cin >> n;
    bool isPrime = n>1;
    for (int i = 2; i < n; ++i){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << "Prime number";
    }else{
        cout << "Not a prime number";
    }
    return 0;
}