class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = INT_MAX;
        int high = INT_MIN;
        int ans = 1;
        if(1LL*k*m>n){
            return -1;
        }
        for(auto i : bloomDay){
            low = min(i,low);
            high = max(high,i);
        }
        while(low<=high){
            int mid = low + (high - low)/2;
            // cout<<low<<" "<<mid<<" "<<high<<endl;
            int count = 0;
            int bouqets = 0;
            for(int i = 0 ; i < n ; i++){
                if(bloomDay[i]<=mid){
                    count++;
                    if(count==k){
                    bouqets++;
                    count = 0;
                }
                }
                else{
                    count = 0;
                }
            }
            if(bouqets>=m){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid +1 ;
            }
           // cout<<count<<endl;
        }
        return ans;
    }
};