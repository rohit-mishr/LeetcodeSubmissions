class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0){
            nums1 = nums2;
            return ;
        }
        if(n==0){
            return;
        }
        int i = m+n-1;
        int j = (m-1);
        for(int k = 0 ; k < m ; k++){
            nums1[i] = nums1[j];
            nums1[j] = 0;
            j--,i--;
        }
        i = n;
        j = 0;
        int index = 0;
        m = nums1.size();
        while(i < m && j < n){
            if(nums1[i]<=nums2[j]){
                nums1[index++] = nums1[i++];
            }
            else {
                nums1[index++] = nums2[j++];
            }
        }
        while(j < n && index < m){
            nums1[index++] = nums2[j++];
        }
    }
};