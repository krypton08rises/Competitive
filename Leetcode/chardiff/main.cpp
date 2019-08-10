#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    string s = "pwwkew";
   int i=0,j=0,count=0,index;
        array<int,26> arr{0},temp{0};
        while(i<s.size()){
            index = s[i]-'a';
            if(temp[index]>0){
                    copy(arr.begin(), arr.end(), temp.begin());
                    j++;
                    i=j;
                    continue;
            }
                temp[index]++;
                i++;

                if(i-j>count)
                        count = i-j;
        }
        cout<<count;
    }

