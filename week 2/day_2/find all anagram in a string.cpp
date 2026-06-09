class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> a(26, 0), b(26, 0);

        for(char ch : p)
            a[ch - 'a']++;

        int k = p.size();

        for(int i = 0; i < s.size(); i++) {

            b[s[i] - 'a']++;
if(i >= k)
                b[s[i - k] - 'a']--;

            if(a == b)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
            
