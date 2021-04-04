#include <iostream>
#include <vector>

void print_array(const std::vector<int>& arr)
{
    std::cout << "The array is: "
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubble_sort(std::vector<int>& arr)
{
    for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = 0; j < arr.size() - i; ++j) {
            if (arr[j + 1] < arr[j]) {
                arr[j] += arr[j + 1];
                arr[j + 1] -= arr[j];
                arr[j] -= arr[j + 1];
            }
        }
    }
}

int main()
{
    std::vector<int> arr{3, 1, 5, 2, 7};
    print_array(arr);
    bubble_sort(arr);
    print_array(arr);
    return 0;
}
