#include <iostream>
using namespace std;

void paramteredsum(int i, int sum){

    if(i < 1){
        cout << sum << endl;
        return;
    }

     paramteredsum(i - 1, sum + i);
}



int main(){

    int n;

    cout << "Enter the number: ";
    cin >> n;

    paramteredsum(n, 0);
    return 0;
}