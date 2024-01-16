#include <iostream>
#include <vector>

int subarraysWithSumK(std::vector<int> a, int b) {
    // Write your code here

    int n = a.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = i; j < n; j++) {
            x = x ^ a[j];
            if (x == b) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int result = subarraysWithSumK(arr, k);
    std::cout << "Number of subarrays with sum " << k << ": " << result << std::endl;

    return 0;
}
