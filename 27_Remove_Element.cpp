class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int reader = 0;
        int writer = 0;

        while (reader < length) {
            if (nums[reader] != val) {
                nums[writer] = nums[reader];
                writer++;
            }
            reader++;
        }
        return writer;
    }  
};