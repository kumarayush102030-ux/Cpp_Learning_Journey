class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int a=arr.size()-1;
        int i=0,j=1;
        while(j<=a){
            swap(arr[i],arr[j]);
            i+=2; j+=2;
        }
        
    }
};