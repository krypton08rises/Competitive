#include <iostream>
#include <string>

using namespace std;

int main()
{
            string temp1,temp2,temp3,str1="ababab",str2="abababab",result = "";
            int n;
            temp1 = str1.size()>str2.size()?str2:str1;
                while(temp1!=""){
                        if(str2.size()%temp1.size()!=0 || str1.size()%temp1.size()!=0){
                            n = temp1.size()-1;
                            temp1 = temp1.substr(0,n);
                            continue;
                        }
                        cout<<temp1;
                    temp3 = temp1;
                    temp2 = temp1;
                    cout<<temp2;
                    n = str2.size()/temp3.size();
                    while(n!=1){
                        temp1+=temp1;
                        n--;
                    }
                    n = str1.size()/temp3.size();
                    while(n!=1){
                        temp2+=temp2;
                        n--;
                    }
                    if(temp1==str2 && temp2== str1){
                        result = temp3;
                        break;
                    }
                    temp1 = temp3;
                    temp1 = temp1.substr(0,temp1.size()-1);
                }

            //   cout<<result;
}
