class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int num1 = INT_MIN;
        int num2 = INT_MIN;
        int n = nums.size();
        vector<int> ans;
        for(auto i : nums){
            if(cnt1==0 && i!= num2){
                cnt1 = 1;
                num1 = i;
            }
            else if(cnt2 == 0 && i != num1){
                cnt2 = 1;
                num2 = i;
            }
            else if(i == num1){
                cnt1++;
            }
            else if(i == num2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        for(auto i : nums){
            if(i==num1){
                cnt1++;
            }
        }
        cnt2 = 0;
        for(auto i : nums){
            if(i==num2){
                cnt2++;
            }
        }
        if(cnt1>(n/3)){
            ans.push_back(num1);
        }
        if(cnt2>(n/3)){
            ans.push_back(num2);
        }
        return ans;
    }
};