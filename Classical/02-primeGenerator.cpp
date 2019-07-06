#include <iostream>
#include <cmath>
using namespace std; 

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1){
        return false;
    }   
  
    // Check from 2 to n-1 
    for (int i=2; i< sqrt(n)+1; i+=2) {
        if (n%i == 0) {
            return false; 
        }
    }
    return true; 
} 

int primes(int a, int b){
    for (int i=a; i<=b; i++){
        if (isPrime(i)==1){
            return i;
        }
    }
}

int main(){
    int testcases, a, b;
    cin >> testcases;
    
    for (int j = 0; j < testcases; j++){
        cin >> a >> b;
        primes(a, b);
    }
}