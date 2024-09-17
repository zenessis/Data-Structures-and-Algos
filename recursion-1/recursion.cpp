// RECURSION VIDEOS - 1 TO 5

// INTRODUCTION 
// PROBLEMS ON RECURSION
// PARAMETERISED AND FUNCTIONAL RECURSION
// PROBLEM OF FUNCTIONAL RECURSION
// MULTIPLE RECURSION CALLS

// Print Name 5 times
#include <iostream>
using namespace std;

void printName(int i, int n){
    if(i > n) return;

    cout << "Name Printed Successfully" << endl;
    printName(i+1, n);
}

int main(){

    int n;

    cout << "Enter the numbers: " << endl;
    cin >> n;
    printName(1, n);

    return 0;
}