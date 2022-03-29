class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(majority==nums[i])
                count++;
            else{
                if(count>=1)
                count--;
                else
                    count=0;
                
                 if(count==0){
                majority=nums[i];
                     count=1;
                 }
            }
           
        }
        return majority;
    }
};