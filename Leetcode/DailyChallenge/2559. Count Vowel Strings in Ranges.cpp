#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int i=0,n=(int)words.size();
        vector<int> pref(n+1),ans;
        for(auto &word : words) {
            pref[i+1] = pref[i];
            if(isVowel(word[0]) && isVowel(word[(int)word.size()-1])) pref[i+1]++;
            i++;
        }
        for(auto &querie : queries) {
            ans.push_back(pref[querie[1]+1]-pref[querie[0]]);
        }
        return ans;
    }
};