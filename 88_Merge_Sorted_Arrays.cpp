class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m -1;
    int j = n -1;
    int k = m + n -1;
    // Three pointers:
    // i -> last valid element in nums1
    // j -> last element in nums2
    // k -> position to fill in nums1
    // Fill from the back to avoid overwriting elements.
    // nums1 already has extra space; compare from the end and fill from the back.
    while (i >= 0 && j >= 0){
        if(nums1[i]>=nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--]=nums2[j--];
        }
    }
    while(j>=0){
        nums1[k--]=nums2[j--];
    }
    }
};