class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26, 0), b(26, 0);

        for(char ch : s1)
            a[ch - 'a']++;

        int k = s1.size();

        for(int i = 0; i < s2.size(); i++) {

            b[s2[i] - 'a']++;

            if(i >= k)
                b[s2[i - k] - 'a']--;

            if(a == b)
                return true;
        }

        return false;
    }
};
