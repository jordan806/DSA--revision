//used only 1 vector

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());

        int k = nums.size() - 1;

        while(left <= right) {

            if(abs(nums[left]) > abs(nums[right])) {
                ans[k] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[k] = nums[right] * nums[right];
                right--;
            }

            k--;
        }

        return ans;
    }
};









//used 3 vectors

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int>arr1;
        vector<int>arr2;
        vector<int> ans;
       

        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        for(int k=0;k<arr1.size();k++){
             arr1[k]=arr1[k]*arr1[k];
        }
        for(int l=0;l<arr2.size();l++){
             arr2[l]=arr2[l]*arr2[l];
        }

        int i=arr1.size()-1;
        int j=0;

        while(i>=0 && j<arr2.size()){
            if(arr1[i]<arr2[j]){
                ans.push_back(arr1[i]);
                i--;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }

        }
        while(i>=0){
            ans.push_back(arr1[i]);
                i--;
        }
        while(j<arr2.size()){
            ans.push_back(arr2[j]);
                j++;
        }

        return ans;     
    }
};
