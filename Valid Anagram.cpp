class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
        return false;
    }
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
    
    for(int i = 0; i < s.size(); ++i ){
        char _s = s[i];
        char _t = t[i];
        if(mp1[_s]){
            mp1[_s]++;
        }
        else{
            mp1[_s] = 1;
        }

        if(mp2[_t]){
            mp2[_t]++;
        }
        else{
            mp2[_t] = 1;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if( mp1[s[i]] != mp2[s[i]] ){
            return false;
        }
    }
    return true;
    }
};
