#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;

    auto s = [&]() {
        int s , k , m;
        cin >> s >> k >> m;

        string sk;
        cin >> sk;

        int x = s * k;
        bool ok = false;
        
        if(m % x != 0) {
            ok = true;
        } 
            
        for(int i = 0; i + s < m; i+=s) {
            string cur = sk.substr(i , s);
            vector<int> cnt(26 , 0);
            for(auto &y : cur) {
                cnt[y - 'a']++;
            }
            for(int l = 0; l < 26; l++) {
                if(cnt[l] > 1) {
                    ok = true;
                }
                if(cnt[l] > 0 and l > (k - 1)) {
                    ok = true;
                }
            }
        }

        if(!ok) {
            cout << "YES\n";
            return;
        }
        vector<int> cnt(26 , 0);
        for(int i = 0; i < m; i++) {
            cnt[sk[i] - 'a']++;
        }

        cout << "NO\n";

        for(int l = 0 ; l < k; l++) {
            if(cnt[l] < k) {
                for(int i = 0; i < s; i++) {
                    cout << char('a' + l);
                }
                cout << endl;
                return;
            }
        }
        

    };

    cin >> t;

    for(int i = 0; i < t; i++) {
        s();
    }
}