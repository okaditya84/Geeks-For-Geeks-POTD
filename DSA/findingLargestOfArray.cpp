#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int size){
    int largest = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << largest(arr, n);
    return 0;
}