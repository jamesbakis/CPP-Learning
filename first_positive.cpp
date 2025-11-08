#include <algorithm>
#include <iostream>
#include <vector>

int first_positive() {
    std::vector<int> data = {-1, -2, -3, -4, -5, 2, 3, 4, -5};

    auto is_positive = [](const int x) { return x > 0;};
    const auto first_pos_it = std::find_if(data.begin(), data.end(), is_positive);

    return *first_pos_it;
}

int main() {
    std::cout << std::to_string(first_positive()) << "\n";
}