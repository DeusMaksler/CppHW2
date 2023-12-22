class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        std::sort(nums.begin(), nums.end());
        int major = 0;
        int cursor = nums[0];
        int count = 1;
        for(int i = 1; i < n; i++){
            if(cursor == nums[i]){
                count++;
                if((i == n-1)&&(count > (n / 2))) return cursor;
            }else{
                if(count > (n / 2)) return cursor; 
                cursor = nums[i];
                count = 1;
            }
        } 
        return major;
    }
};