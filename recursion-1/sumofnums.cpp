#include <iostream>
using namespace std;

int sumofNums(int i){

    if(i < 1) return 0;

    return sumofNums(i - 1) + i;
}

int main(){
    int n;
    
    cout << "Enter the number: ";
    cin >> n;

    int result = sumofNums(n);
    cout << result << endl;


    return 0;
}