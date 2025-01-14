class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for( char c : s){
            if(isalnum(c)){
                str += tolower(c);
            }
        }

        int i = 0;
        int j = str.size() - 1;

        while ( i < j ){
            if( str[i] == str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }

        return true; 
    }
};
