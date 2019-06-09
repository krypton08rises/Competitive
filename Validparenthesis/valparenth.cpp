class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2)
            return false;

        if (s.size() == 0)
            return true;

        stack<int> mystack;

        for (string::iterator it = s.begin(); it != s.end(); it++) {
            if (!mystack.empty() &&
                (abs(mystack.top() - (int)(*it)) == 2 ||
                abs(mystack.top() - (int)(*it)) == 1))
                mystack.pop();
            else
                mystack.push((int)(*it));
        }

        return !!(mystack.empty());
    }
};

