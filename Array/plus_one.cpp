class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int a = arr.size();
        for(int i= a-1;i>=0;i--){
            if(arr[i] < 9) {
                arr[i]++;
                return arr;
            }
            arr[i]=0;
        }
        arr.insert(arr.begin(),1);
        return arr;
    }
};