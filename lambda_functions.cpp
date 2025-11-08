//
// Created by bakismarsh on 11/8/25.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    auto double_nums = [](const int x) { return 2 * x; };

    const unsigned int nums_size = nums.size();

    //Passing lambda function as parameter
    for (int num = 0; num < nums_size; ++num ) {
        nums.push_back(double_nums(nums[num]));
    }

    for (const int num: nums) {
        std::cout << num << ' ';
    }

    std::cout << "\n";

    nums = {1, 2, 3, 4, 5};

    //Assigning return value of lambda function directly
    for (int & num: nums) {
        num = [](const int x) { return x * 3; } (num);
    }

    for (const int num: nums) {
        std::cout << num << ' ';
    }

    std::cout << "\n";

    nums = {1, 2, 3, 4, 5};

    //Highly redunant use of lambda
    [& nums](const int x) { nums[x] = 300; } (2);

    for (const int num: nums) {
        std::cout << num << ' ';
    }

    std::cout << "\n";
}