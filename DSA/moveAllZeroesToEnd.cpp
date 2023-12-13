#include <iostream>

void moveZeroesToEnd(int nums[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[count] = nums[i];
            count++;
        }
    }

    while (count < n) {
        nums[count] = 0;
        count++;
    }
}

int main() {
    int nums[] = {1, 0, 2, 0, 3, 0, 4, 0, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    moveZeroesToEnd(nums, n);

    std::cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
