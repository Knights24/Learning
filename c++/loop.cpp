#include <iostream>
using namespace std;
int main() {
    int n = 10;
    int sum = 0;
    for(int i = 0; i <=n; i++){
        if(i%2 == 0 ){
            sum += i;
            cout << sum <<endl;
        }
    }

    return 0;
}
  