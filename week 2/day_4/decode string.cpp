class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;

        string curr = "";
        int num = 0;

        for(char ch : s) {

            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if(ch == '[') {
                numStack.push(num);
                strStack.push(curr);

                num = 0;
                curr = "";
            }

            else if(ch == ']') {

                int times = numStack.top();
                numStack.pop();

                string temp = curr;

                for(int i = 1; i < times; i++)
                    curr += temp;

                curr = strStack.top() + curr;
                strStack.pop();
            }

            else {
                curr += ch;
            }
        }

        return curr;
    }
};
