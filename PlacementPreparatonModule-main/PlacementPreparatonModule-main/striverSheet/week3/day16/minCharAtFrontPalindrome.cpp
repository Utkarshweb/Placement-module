#include<bits/stdc++.h>
using namespace std;

vector<int> generateLPS(string ns) {
    int n = ns.size();
    vector<int> lps(n, 0);
    for(int i = 1; i < n; i++) {
        int len = lps[i - 1];
        
        while(len > 0 && ns[i] != ns[len]) len = lps[len - 1];
        
        if(ns[i] == ns[len]) len++;
        
        lps[i] = len;
    }
    
    return lps;
}
int minCharsforPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    
    string ns = s + '$' + rev;
    
    auto lps = generateLPS(ns);
    
    return s.size() - lps.back();
}

int main(){
    string s= "aaaxx";
    cout<<minCharsforPalindrome(s);
    return 0;
}