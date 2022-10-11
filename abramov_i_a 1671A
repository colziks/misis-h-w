#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        if(s.size() == 1){
            cout << "NO" << endl;
        }
        bool f = true;
        for (int i = 0; i < s.size(); i++){
            char l = 'c';
            char l1 = 'd';
            if (i > 0) 
            l = s[i - 1];
            if (i < s.size() - 1)
            l1 = s[i + 1];
            if (s[i] != l && s[i] != l1) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
