class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int area;
        vector<int>::iterator a,b;
        a = height.begin();
        b = height.end()-1;
        int i = 0;
        int j = height.size()-1;
        while(i!=j){
            area = (j-i)*(*a<*b?*a:*b);
            maxarea = area>maxarea?area:maxarea;
            if(*a<*b){
                ++a;
                ++i;
            }
            else{
                --j;
                --b;
            }


        }
        return maxarea;
    }
};
}
