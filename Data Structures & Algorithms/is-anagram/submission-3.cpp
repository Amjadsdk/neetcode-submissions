class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> seen_s;
        unordered_map<char, int> seen_t;

        for(int i = 0; i < t.size(); i++){
            seen_s[s[i]]++;
            seen_t[t[i]]++;
        }

        if(seen_s == seen_t) return true;
        return false;
    }
};
