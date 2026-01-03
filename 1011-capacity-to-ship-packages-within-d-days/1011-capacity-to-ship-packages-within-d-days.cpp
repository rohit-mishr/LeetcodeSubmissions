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
            int d = 0;
            for(int i : weights){
                capacity+=i;
                if(capacity == mid){
                    d++;
                    capacity = 0;
                }
                else if (capacity > mid){
                    d++;
                    capacity = i;
                }
            }
            if(capacity!=0) d++;
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