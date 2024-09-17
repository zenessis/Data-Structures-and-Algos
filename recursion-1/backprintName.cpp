#include <iostream>
using namespace std;

void printName(int i, int n){
    if(i < 1) return;

    cout << i << endl;
    printName(i - 1, n);
}

int main(){

    int n;

    cout << "Enter the numbers: ";
    cin >> n;
    printName(n, n);

    return 0;
}