#include <iostream>
using namespace std;
int main(){
    int n, k, t, a = 1000000;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> t;
        if (k % t == 0) 
        a = min (a, k / t);
    }
    cout << a;
    return 0;
}
