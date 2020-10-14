class Solution { 
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexed_map;
        for(int i=0;i<nums.size();i++){
            if(indexed_map.find(target-nums[i])!=indexed_map.end()){
                return {indexed_map[target-nums[i]], i};
            }
            else{
                indexed_map[nums[i]]=i;
            }
        }
        return {};
    }
};