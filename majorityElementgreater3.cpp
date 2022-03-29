class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int val1=nums[0];
        int val2=nums[0];
        int c1=1;
        int c2=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==val1)
            {
                c1++;
            }else if(nums[i]==val2)
            {
             c2++;   
            }
            else{
              if(c1==0)
              {
                 val1=nums[i];
                  c1=1;
              }else if(c2==0)
              {
                  val2=nums[i];
                  c2=1;
              }
                else{
                   c1--;
                    c2--;
                }
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val1)
                c1++;
            else if(nums[i]==val2)
                c2++;
        }
        vector<int>res;
        
        if(c1>n/3)
        res.push_back(val1);
        if(c2>n/3)
        res.push_back(val2);
        return res;
    }
};