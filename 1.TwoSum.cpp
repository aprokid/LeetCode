class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        
        for(int i=0; i < nums.size(); i++)
        {
            auto find_tar = map.find(target - nums[i]);
            if(find_tar != map.end())
            {
                ans.push_back(find_tar->second);
                ans.push_back(i);
                break;
            }
            map[nums[i]] = i; 
        }
        return ans;
    }
};
