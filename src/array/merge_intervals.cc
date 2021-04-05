#include <algorithm>
#include <iostream>
#include <vector>

static bool cmp(const std::vector<int>& a, const std::vector<int> & b) {
    return a[0] < b[0];
}

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), cmp);
    std::vector<std::vector<int>> res;
    int begin = intervals[0][0];
    int end = intervals[0][1];
    for (size_t i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= end) {
            if (end < intervals[i][1]) {
                end = intervals[i][1];
            }
            continue;
        }
        std::vector<int> tmp{begin, end};
        res.push_back(tmp);
        begin = intervals[i][0];
        end = intervals[i][1];
    }
    if (res.empty() || (res[0][0] != begin)) {
        std::vector<int> tmp{begin, end};
        res.push_back(tmp);
    }
    return res;
}

void print_intervals(const std::vector<std::vector<int>>& intervals) {
    std::cout << "intervals:" << std::endl;
    for (size_t i = 0; i < intervals.size(); i++) {
        std::cout << "[" << intervals[i][0] << ", " << intervals[i][1] << "]" << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::vector<int>> intervals{{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    print_intervals(intervals);
    std::vector<std::vector<int>> new_intervals = merge(intervals);
    print_intervals(new_intervals);
}
