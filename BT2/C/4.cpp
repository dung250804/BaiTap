#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = (n-1)*2 + 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < a;j++){
            cout << "*";
        }
        cout << endl;
        a -=2;
    }
}
