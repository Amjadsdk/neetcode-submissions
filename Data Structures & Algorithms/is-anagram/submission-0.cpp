class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen_s, seen_t;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            seen_s[s[i]]++;
            seen_t[t[i]]++;
        }
        if(seen_s != seen_t){
            return false;
        } else return true;
    }
};
