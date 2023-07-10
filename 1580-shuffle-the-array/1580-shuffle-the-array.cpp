class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        

        vector<int> ans;
        int j = n;
        int i = 0;

        while( i <= n && j < 2*n){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++; j++;
        }

        return ans;

    }
};