class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = 0;
        int ans = 0;
        for(int i : weights){
            high+=i;
        }   
        while(low<=high){
            int mid = low + (high-low)/2;
            int capacity = 0;
            int d = 1;
            for(int i : weights){
                if(capacity + i > mid){
                    d++;
                    capacity = i;
                }
                else{
                    capacity += i;
                }
            }
            if(d<=days){
                ans = mid;
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }
};