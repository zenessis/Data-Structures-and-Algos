#include <iostream>
using namespace std;

void backtrackSecond(int i, int n){
    if(i > n) return;

    backtrackSecond(i + 1, n);
    cout << i << endl;
}

int main(){

    int n;

    cout << "Enter the number: ";
    cin >> n;

    backtrackSecond(1, n);

    return 0;
}