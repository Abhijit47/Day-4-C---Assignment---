#include <iostream>
using namespace std;

int main () {

    int num, i, res=0;
    cout << "Enter the number to check whether it is prime or not: "; 
    cin >> num;

    for (i=1; i<=num; i++) {
        if (num % i == 0) {
            res ++;
        }
    }
    if (res == 2) {
        cout << num<<" is a prime number. ✅" << endl;
    }
    else{
        cout << num<<" is not a prime number. ❌" << endl;
    }

    return 0;
}