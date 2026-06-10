class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        for(int len = 1; len <= s.size()/2; len++) {

            if(s.size() % len == 0) {

                string sub = s.substr(0, len);
                string temp = "";

                for(int i = 0; i < s.size()/len; i++)
                    temp += sub;

                if(temp == s)
                    return true;
            }
        }

        return false;
    }
};
