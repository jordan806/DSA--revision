//brute force (n3) 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        
        for(int i=0;i<nums.size();i++){
            for(int j =i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                
                    if(nums[i]+nums[j]+nums[k] == 0 ){
                        
                        vector<int> temp={
                            nums[i],nums[j],nums[k]
                        };
                        
                        st.insert(temp);
                    }
                                     
                }
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());  //copying the val from set to ans
        return ans;
    }
};
