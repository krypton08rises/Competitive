class Solution {
public:
    int myAtoi(string str) {
        string buffer;
        int j=0,k=0;
        while(( int(str[j])<49 || int(str[j])>58 ) && int(str[j]!=45)){
        j++;
        }
        if(j==str.size())
            return 0;
        while(j<str.size()){
        buffer[k] = str[j];
        k++;
        j++;
    }
        if(stoi(buffer)==0 && int(buffer[j])==45)
            return INT_MIN;
        else if(stoi(buffer)==0)
            return INT_MAX;
        long long int i = stoi(buffer);
        return i;
    }
};
/*class Solution {
public:
    int myAtoi(string str) {
        string buffer;
        int j=0,k=0;
        while(( int(str[j])<49 || int(str[j])>58 ) && int(str[j]!=45)){
        j++;
        }
        if(j==str.size())
            return 0;
        while(j<str.size()){
        buffer[k] = str[j];
        k++;
        j++;
    }
        if(atoi(buffer.c_str())==0 && int(buffer[j])==45)
            return INT_MIN;
        else if(atoi(buffer.c_str())==0)
            return INT_MAX;
        long long int i = atoi(buffer.c_str());
        return i;
    }
};
*/
