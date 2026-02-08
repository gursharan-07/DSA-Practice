class Solution {
public:
    int maxArea(vector<int>& height) {
        int minh=0;
        int i=0;
        int j=height.size()-1;
        int area;
        int maxa=0;
        while(i<j){
            minh=min(height[i],height[j]);
            int width=j-i;
            area=minh*width;
            maxa=max(maxa,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxa;
    }
};