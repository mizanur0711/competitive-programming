//65ms
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(s.find(x)!=s.end())
            {
                return true;
            }
            else
            {
                s.insert(x);
            }
        }
        
        return false;
    }
};

//25ms
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {

            if(nums[i]==nums[i+1])
            {
                return true;
            }
            else
                continue;
        
        }
        
        return false;
    }
};

//16ms

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        if (n == 0 || n == 1) {
            return false;
        }
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n-1; i++) {
             if(nums[i]==nums[i+1])
            {
                return true;
            }
            else
                continue;
        }
        
        return false;
    }
};
