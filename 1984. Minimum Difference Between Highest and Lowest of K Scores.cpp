class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;
        std::sort(nums.begin(), nums.end());
        int spacing = k - 1;
        int min = 100001;
        for(int i = 0; i < nums.size()-spacing; i++){
            int dif = nums[i+spacing] - nums[i];
            if(dif < min) min = dif; 
        }
        return min;
    }

};