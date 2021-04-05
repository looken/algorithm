#include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits)
{
    std::vector<int> res;
    int plus = 1;
    for (int i = digits.size() - 1; i >= 0; i--) {
        int tmp = digits[i] + plus;
        res.push_back(tmp % 10);
        plus = tmp / 10;
    }
    if (plus != 0) {
        res.push_back(plus);
    }
    reverse(res.begin(), res.end());
    return res;
}

void print_array(const std::vector<int>& arr)
{
    std::cout << "The array is: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> num{1, 3, 4, 5};
    print_array(num);
    std::vector<int> new_num = plusOne(num);
    print_array(new_num);
    return 0;
}
