#include <iostream>
#include <vector>
#include <algorithm> 
 
int main() {
    int n = 0;
    long long int k = 0;
    int a = 0;
    int wcount = 0;
    int wforce = 0;
    std::vector<int> force;
    std::cin >> n >> k;
    for (int i = 0; i < n; i ++) {
        std::cin >> a;
        force.push_back(a);
    }
    if (k + 1 > force.size()) {
        int answer = *std::max_element(std::begin(force), std::end(force));
        std::cout << answer;
        return 0;
    }
    while (wcount != k) {
        for (int i = 1; i < n; i++) {
            if (force[0] >force[i]) {
                wcount += 1;
                wforce = force[0];
                if (wcount == k) {
                    break;
                }
            }
            else {
                wcount = 1;
                force.push_back(force[0]);
                force.erase(force.begin(), force.begin() + 1);
                break;
            }
        }
    }
    std::cout << wforce;
    return 0;
}
