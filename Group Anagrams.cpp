class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for( int i = 0; i < strs.size(); ++i){
            string sorted_str = strs[i];
            sort(sorted_str.begin(), sorted_str.end());
            mp[sorted_str].push_back(strs[i]);
        }

        for( auto it: mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
