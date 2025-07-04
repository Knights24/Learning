#include <iostream>
using namespace std;

int main(){
    bool isPrime = true;
    int n = 15;
    for(int i = 2; i <= n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime = true){
        cout << n << " Is prime" << endl;

    }

    else{
        cout << n << " Is not prime" << endl;
    }

    return 0;
}