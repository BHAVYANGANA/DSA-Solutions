class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    
    //O(n) solution: Kadane algorithm
    //sum = sum + arr[i]
    //maxi update
    //if sum < 0: sum = 0

    int n = nums.size();
    int sum = 0;
    int maxi = nums[0];

    for(int i = 0; i < n; i++){

        sum += nums[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
    }

    //Approach 2: Divide & conquer
};