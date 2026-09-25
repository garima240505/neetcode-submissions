class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int,int> mp;
        unordered_map<int,int> np;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            np[t[i]]++;
        
        }
        if(mp==np) return true;
        return false;
    }
};
