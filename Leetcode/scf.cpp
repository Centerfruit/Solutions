// https://leetcode.com/problems/sort-characters-by-frequency/description/

class Solution {
public:
    static bool cmp(pair<char, int> &a, pair<char, int> &b) {
        return a.second < b.second;
    }
    string frequencySort(string s) {
        vector<pair<char, int>> cnt(62);
        for (int i = 0; i < 26; i++) 
            cnt[i].first = 'a' + i;
        for (int i = 26; i < 52; i++) 
            cnt[i].first = 'A' + i - 26;
        for (int i = 52; i < 62; i++) 
            cnt[i].first = '0' + i - 52;  
        for (int i = 0; i < s.length(); i++) 
            if (s[i] < 'A')
                cnt[s[i] - '0' + 52].second++;
            else if (s[i] < 'a')
                cnt[s[i] - 'A' + 26].second++;
            else
                cnt[s[i] - 'a'].second++;
        sort(cnt.rbegin(), cnt.rend(), cmp);
        if (cnt[0].second == 1)
            return s; 
        s = "";
        for (int i = 0; i < 62; i++) {
            if (!cnt[i].second)
                return s;
            while (cnt[i].second--) {
                s += cnt[i].first;
            }
        }
        return s;
    }
};
