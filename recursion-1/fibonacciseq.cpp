#include <iostream>
using namespace std;

int fibonacci(int n){
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);

    return last + slast;
}


int main(){

    int n;

    cout << "Enter the number: ";
    cin >> n;

    fibonacci(n);
    cout << 

    return 0;
}