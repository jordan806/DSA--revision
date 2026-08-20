//brute force tc:o(n3)  sc:o(n)

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


//optimised  tc:o(n2)  sc:o(n)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        
        
        for(int i=0;i<nums.size();i++){

            int j =i+1;
            int k =nums.size()-1;

            while(j<k){

                int sums=nums[i]+nums[j]+nums[k];

                if(sums ==0){
                    vector<int> temp ={
                        nums[i],nums[j],nums[k]
                    };
                    st.insert(temp);
                    j++;
                    k--;
                }

                else if(sums<0){
                    j++;
                }

                else{
                    k--;
                }     
            }



            //optimsed tc:o(n2)  sc:o(1)



class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        // code here
        vector<vector<int>> ans;
        
        sort(arr.begin(),arr.end());
        
        
        
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            
            int j=i+1;
            int k=arr.size()-1;
            
            while(j<k){
                int sums=arr[i]+arr[j]+arr[k];
                
                if(sums==0){
                    ans.push_back({arr[i],arr[j],arr[k]});
                
                j++;
                k--;
                
            
               while(j<k && arr[j]==arr[j-1]){
                j++;
                }
               while(j<k && arr[k]==arr[k+1]){
                k--;
               }
               
            }  
               else if(sums<0){
                   j++;
               }
               
               else{
                   k--;
               }
               
            }
            
            
        }
        return ans;
    }
};
               
