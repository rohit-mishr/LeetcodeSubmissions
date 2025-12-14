import java.util.HashMap;
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int cnt = 0;
        int presum = 0;
        int remaining = 0;
        Map<Integer,Integer> mmap = new HashMap<>();
        mmap.put(0,1);
        for(int i = 0 ; i < n ; i++){
            presum+=nums[i];
            remaining = presum-k;
            cnt+=mmap.getOrDefault(remaining,0);
            mmap.put(presum,mmap.getOrDefault(presum,0)+1);
        }
        return cnt;
    }
}