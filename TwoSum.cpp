#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n= nums.size();
        
        for(int i=0; i<n; i++){
            if (mp.find(target-nums[i]) != mp.end()) 
                return {mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
        }
        return {};
    }
};
int main(){
    Solution s ;
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= s.twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;
}