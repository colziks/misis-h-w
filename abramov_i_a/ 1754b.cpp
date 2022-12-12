#include <iostream>
using namespace std;
 
int main() {
    int t; std::cin>>t;
 
while(t--) {
    int n;
    std::cin>>n;
 
    int i = n / 2; 
    int j = n;
    if(n % 2 == 1) i = i + 1;
 
 
 
    while(i > 0) {
          std::cout<<i<<" ";
          i--;
          if(i == 0) break;
          std::cout<<j<<" ";
          j--;
    }
 
    if(n % 2 == 0) std::cout<<j;
    std::cout<<std::endl;
}
 
return 0;
}
