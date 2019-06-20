class Solution {
public:
    string countAndSay(int n) {
        string element = "1";
        for(int i = 1; i < n; i++){
            string nextElement;
            int count = 1;

            for(int j = 0; j < size(element) - 1; j++){
                if(element[j] != element[j + 1]){
                    nextElement += '0' + count;
                    nextElement += element[j];
                    count = 1;
                }
                 else{
                    ++count;
                }
            }

            nextElement += '0' + count;
            nextElement += element[size(element) - 1];
            element = nextElement;
         }
                 return element;
    }
};
