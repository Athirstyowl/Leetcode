class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for( int i =0; i<strs.size(); ++i){
            string part_string = strs[i];
            int length = part_string.size();
            ans += to_string(length) + '#' + part_string;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> ans;
        string strToAdd = "";
        int e = 0;
        int strLen;
        
        for(int i = 0; i<s.size(); ++i){
            if(s[i] == '#'){
                strLen = stoi(s.substr(e,i-e));
                string _s = s.substr(i+1, strLen);
                ans.push_back(_s);
                i +=strLen;
                e = i+1;
            }
        }
        return ans;
    }
}; 
