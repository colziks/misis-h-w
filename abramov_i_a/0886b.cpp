
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    int n = 0;
    int a = 0;
    int min = 1000000000;
    int res = 0;
    std::vector<int> arr;
    std::map <int, int> mp;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> a;
        arr.push_back(a);
        mp[a] = i;
    }
    if (n == 1) {
        std::cout << arr[0];
        return 0;
    }
    res = mp[0];
    for (int i = 0; i < n; i ++){
        if(mp[arr[i]] < min ) {
            res = arr[i];
            min = mp[arr[i]];
        }
    }
    std::cout << res;
    return 0;
}
