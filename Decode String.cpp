class Solution {
public:
    string decodeString(string s) {
        stack<string> st;

        for(int i = 0; i<s.size(); i++){
            if( s[i] != ']'){
                st.push(string(1, s[i]));
            }
            else{
                string wholeString = "";
                string substring = "";
                while( st.top() != "["){
                    substring = st.top() + substring;
                    st.pop();
                }
                st.pop();
                string freq = "";
                while( !st.empty() && isdigit(st.top()[0])){
                    freq = st.top() + freq;
                    st.pop();
                }
                int frequency = stoi(freq);
                while(frequency--){
                    wholeString = substring + wholeString;
                }
                st.push(wholeString);
            }
        }

        string res = "";
        while( !st.empty()){
            res = st.top() + res;
            st.pop();
        }

        return res;
    }
};
