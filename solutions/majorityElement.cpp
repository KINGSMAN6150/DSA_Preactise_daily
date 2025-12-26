class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int a = 0;

        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                a = nums[i];
            }

            if(nums[i] == a){
                count++;
            } else {
                count--;
            }
        }

        return a;
    }
};


//the problem i faced was to loop the 2nd if condition  in first which i did resolved.