#include <iostream>
using namespace std;

int* findUnion(const int* arr1, int n1, const int* arr2, int n2, int& unionSize) {
    int* unionArray = new int[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArray[k] = arr1[i];
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionArray[k] = arr2[j];
            j++;
        } else {
            unionArray[k] = arr1[i];
            i++;
            j++;
        }
        k++;
    }

    while (i < n1) {
        unionArray[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2) {
        unionArray[k] = arr2[j];
        j++;
        k++;
    }

    unionSize = k;
    return unionArray;
}

int main() {
    int n1;
    cout << "Enter the size of the 1st array: ";
    cin >> n1;
    int* arr1 = new int[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the size of the 2nd array: ";
    cin >> n2;
    int* arr2 = new int[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionSize = n1 + n2;
    int* unionArray = findUnion(arr1, n1, arr2, n2, unionSize);

    cout << "The union of the two arrays is: ";
    for (int i = 0; i < unionSize; i++) {
        cout << unionArray[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] unionArray;

    return 0;
}