class Solution {
public:
    int findLucky(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        int lucky = -1;
        int cursor = arr[0];
        int count = 1;
        for(int i = 1; i < arr.size(); i++){
            if(cursor == arr[i]){
                count++;
                if((i == arr.size()-1)&&(count == cursor)) lucky = cursor;
            }else{
                if(count == cursor) lucky = cursor; 
                cursor = arr[i];
                count = 1;
            }
        } 
        return lucky; 
    }
};