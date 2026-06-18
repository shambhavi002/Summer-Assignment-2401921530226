class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        stack<int> st;
        int ans = 0;

        heights.push_back(0);

        for(int i = 0; i < heights.size(); i++) {

            while(!st.empty() && heights[st.top()] > heights[i]) {

                int h = heights[st.top()];
                st.pop();

                int w;

                if(st.empty())
                    w = i;
                else
                    w = i - st.top() - 1;

                ans = max(ans, h * w);
            }

            st.push(i);
        }

        return ans;
    }
};
