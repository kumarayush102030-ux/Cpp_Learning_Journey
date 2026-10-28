class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=nums.size();
        for(int i=0;i<=a;i++){
            bool flag=false;
            for(int j=0;j<a;j++){
                if(nums[j]==i){
                    flag=true;
                    break;
                }
            }
            if(flag== false) return i;
        }
        return 0;
    } 
};
//fastest method
// int n= nums.size();
// int sum=0;
// for(int el: nums) sum= el+sum;
// int actsum= n*(n+1)/2;
// return actsum-sum;