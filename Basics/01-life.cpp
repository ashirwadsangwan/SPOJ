#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        cout << n << endl;
        if (n==42){
            break;
        }
    }
    return 0;
}