class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> mp;
       mp[0] = 1;
       int sum = 0;
       int count = 0;


       for (int num : nums){
        sum += num;

        if(mp.find(sum-k) != mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
       }
       return count;
    }
};

//can be uesd brute force but not helpful for big datastructure so using hashmap makes it was easier and faster so the code is optimised 