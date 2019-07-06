#include <iostream>
#include <string>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    string s;
    
    for (int i=0; i<testcases; i++){
        cin >> s;
        
        int len = s.size();
        for (int j=0; j < len/2; j+=2){
            cout << s[j];
        }
        cout << endl;
    }
    return 0;
}