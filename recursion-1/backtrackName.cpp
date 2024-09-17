#include <iostream>
using namespace std;

void backtractName(int i, int n){
    if(i < 1) return;

    backtractName(i - 1, n);
    cout << i << endl;

}

int main(){

    int n;
    
    cout << "Enter the number: ";
    cin >> n;

    backtractName(n, n);

    return 0;
}