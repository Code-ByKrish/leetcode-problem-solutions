class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int length=nums.size();
    int writer = 0;
    int unique = 1;
    int reader = 1;
    while(reader < length){
        if(nums[reader]==nums[reader-1]){
            reader++;
        }
        else{
            nums[writer+1]=nums[reader];
            writer++;
            reader++;
            unique++;
        }
    }
    return unique;
    }
};