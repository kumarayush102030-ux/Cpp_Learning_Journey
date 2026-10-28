class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0 ;
        vector<int> v(nums1.size());
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) 
                v[k++]= nums1[i++];
            else if(nums1[i]>nums2[j])
                v[k++] = nums2[j++];
            else{
                v[k++] = nums1[i++];
                v[k++] = nums2[j++];
            } 
        }
        while(i<m) v[k++] = nums1[i++];
        while(j<n) v[k++] = nums2[j++];
        int a=0;
        for( int el : v){
            nums1[a]=el;
            a++;
        }
            
        
    }
};