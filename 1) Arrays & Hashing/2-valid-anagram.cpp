#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod = 1e9+7;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sm,tm;
        for(auto x:s) sm[x]++;
        for(auto x:t) tm[x]++;
        if(sm.size()!=tm.size()) return false;
        for(auto &x:sm){
            if(sm[x.first]!=tm[x.first]){
                return false;
            }
        }
        return true;
    }
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    Solution obj;
}