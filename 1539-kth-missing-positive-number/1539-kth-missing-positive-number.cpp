class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int n = arr.size();
        int high = arr.size()-1;
        int ans = 0;
        while(low<=high){
           
            int mid = low + (high - low)/2;
             cout<<mid<<" ";
            if((arr[mid]-mid-1)<k){
                low = mid + 1;
            }
            else{
                ans = mid + k;
                high = mid - 1;
            }
        }
        if(ans == 0){
            ans = k + n;   
        }
        return ans;
    }
};