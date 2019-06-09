class Solution {
public:
    bool isValid(string s) {
        int check=0,k = -1,i = 0;
        vector <char> prev;
        prev[0] = 'i';
        map <char,char> par;
        par.insert(pair<char, char>('{', '}'));
        par.insert(pair<char, char>('(', ')'));
        par.insert(pair<char, char>('[', ']'));

        while(i<s.length()){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                ++k;
                prev[k] = s[i];
            }
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(s[i]!=par[prev[k]])
                    return false;
                k--;
            }
                i++;
        }
        return true;
    }
};
