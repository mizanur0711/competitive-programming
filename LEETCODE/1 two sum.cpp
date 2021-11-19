class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(s.find(x)!=s.end())
            {
                ans.push_back(i);
                for(int j=0;j<nums.size();j++)
                {
                    if(x==nums[j])
                    {
                        ans.push_back(j);
                        break;
                    }
                }
            }
            else
            {
                s.insert(nums[i]);
            }
            if(ans.size()==2)
            {
                break;
            }
            
        }
        return ans;
    }
};
