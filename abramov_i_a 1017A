#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    int n = 0;
    int grade = 0;
    int thomast = 0;
    std::vector<int> vec;
    
    std::cin>>n;
 
    for(int j = 0; j < n; j++){
        int summ = 0;
        for(int i =0; i <4; i++){
            std::cin>>grade;
            summ+=grade;
        }
        vec.push_back(summ);
    }
    thomast = vec[0];
    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());
    for(int i = 1; i <= n; i++){
        if (vec[i-1] == thomast){
            std::cout<<i;
            break;
        }
    }
    return 0;
}
