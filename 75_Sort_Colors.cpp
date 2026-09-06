class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag 
        int left = 0;
        int focus = 0;
        int right = nums.size()-1;

        while(focus <= right){
            if(nums[focus]==0){
                swap(nums[focus],nums[left]);
                focus++;
                left++;
            }
            else if(nums[focus]==1){
                focus++;
            }
            else {
                swap(nums[focus],nums[right]);
                right--;
            }
        }
        }
};