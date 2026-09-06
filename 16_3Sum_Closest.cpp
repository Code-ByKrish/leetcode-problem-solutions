class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int result;
        int n = nums.size();
        int mindiff = INT_MAX;
        int i = 0;

        sort(nums.begin(),nums.end());

        for(i = 0;i < n - 2;i++){

            if(i > 0 && nums[i]==nums[i-1]){
                continue;
            }

            int left=i+1;
            int right=n-1;

            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == target){
                    return sum;
                }
                else if(sum < target){
                    int diff = abs(sum - target);
                    if (diff < mindiff){
                        mindiff = diff;
                        result = sum;
                    }
                    left ++;
                    }
                else {
                    int diff = abs(sum - target);
                    if (diff < mindiff){
                        mindiff = diff;
                        result = sum;
                    }
                    right --;
                    }
                }
                }
            return result;
            }
};