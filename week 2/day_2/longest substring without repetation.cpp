class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int l = 0, ans = 0;

        for(int r = 0; r < s.size(); r++) {

            while(st.count(s[r])) {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
