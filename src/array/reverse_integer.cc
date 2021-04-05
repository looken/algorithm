#include <iostream>
#include <limits.h>
#include <vector>

int reverse_integer(int num) {
    int res = 0;
    bool is_negative = num < 0;
    // -2147483648, That is -2^31
    if (num == INT_MIN) {
        return 0;
    }
    num = is_negative ? -num : num;
    while (num != 0) {
        // INT_MAX : 2 ^ 31 - 1
        if (res > INT_MAX / 10) {
            return 0;
        }
        res *= 10;
        if (res > INT_MAX - num % 10) {
            return 0;
        }
        res += (num % 10);
        num /= 10;
    }
    return is_negative ? -res : res;
}

void print_num(int num) {
    std::cout << "num: " << num << std::endl;
}

int main()
{
    int num = -23468;
    print_num(num);
    int new_num = reverse_integer(num);
    print_num(new_num);
    return 0;
}
