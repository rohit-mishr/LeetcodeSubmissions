class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = INT_MIN;
        int ans = 1;
        for(int i : piles){
            high = max(i,high);
        }
        while(low<=high){
            int mid = low + (high - low)/2;
            long long sum = 0;
            for(int i : piles){
                sum+=ceil((double)i/mid);
            }
            if(sum<=h){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }
};