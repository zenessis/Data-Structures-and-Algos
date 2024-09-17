#include <iostream>
#include <vector>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    printF(ind+1, ds, arr, n);
    ds.pop_back();
}

int main(){

        int arr[] = {3, 2, 1};
        int n = 3;
        vector<int> ds;
        printF(0,ds, arr, n);
    return 0;
}