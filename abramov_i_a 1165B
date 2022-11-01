#include <vector>
#include <iostream>
#include <algorithm>
 
int main() {
    std::vector<int> arr;
    int a = 0;
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        arr.push_back(a);
    }
    std::sort (arr.begin(), arr.end());
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= count) {
            count += 1;
        }
    }
    std::cout <<count - 1;
    return 0;
}
