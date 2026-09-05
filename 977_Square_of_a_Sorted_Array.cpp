class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector <int> positive;
        vector <int> negative;

        for(int x : nums){
            if(x >= 0){
                positive.push_back(x);
            }
            else{
                negative.push_back(-x);//store absolute value
            }

            reverse(negative.begin(),negative.end());

            int i = 0;
            int j = 0;

            vector <int> ans;

            while(i < negative.size() && i < positive.size()){
                if(negative[i] < positive[j]){
                    ans.push_back(negative[i]*negative[i]);
                    i++;
                }else{
                    ans.push_back(positive[j]*positive[j]){
                        j++;
                    }
                }
            }

            while(i < negative.size()){
                ans.push_back(negtive[i]*negative[i]);
                i++;
            }

            while(j < positive.size()){
                ans.push_back(positive[j]*positive[j]);
                j++;
            }

            return ans;
        }
    }
};