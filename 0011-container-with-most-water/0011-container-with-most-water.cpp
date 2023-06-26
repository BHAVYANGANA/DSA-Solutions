/*class Solution {
public:
    int maxArea(vector<int>& height) {

        int i = 0;
        int j = height.size() - 1;
        int area = 0;
        while(i < j){
            if (height[i] <= height[j]){
                area = max(area, (j - i) * height[i]);
                i++;
            }
            else{
                area = max(area, (j - i) * height[j]);
                j--;
            }
        }
        return area;

    }
    
};*/












class Solution {
public:

    int maxArea(vector<int>& height){
        int i = 0;
        int j = height.size() - 1;
        int area = 0;
        int minLength = 0;

        while(i < j){
            minLength = min(height[i], height[j]);
            area = max(area, minLength * (j - i));
            if(height[i] > height[j]){
                j--;
            }
            else{
                i++;
            }

        }
        return area;
    }
};










