class Solution {
public:
    int romanToInt(string s) {
        int sum=0,i=0;
        map <char,int> conv;
        conv.insert(pair<char, int>('I', 1));
        conv.insert(pair<char, int>('V', 5));
        conv.insert(pair<char, int>('X', 10));
        conv.insert(pair<char, int>('L', 50));
        conv.insert(pair<char, int>('C', 100));
        conv.insert(pair<char, int>('D', 500));
        conv.insert(pair<char, int>('M', 1000));
        while(i<s.length()){
            if(conv[s[i]]<conv[s[i+1]]){
                sum+=(conv[s[i+1]]-conv[s[i]]);
                continue;
                i+=2;
            }
            sum+=conv[s[i]];
            i++;
        }

        return sum;
    }
};
