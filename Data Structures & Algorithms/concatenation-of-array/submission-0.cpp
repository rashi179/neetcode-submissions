class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // my logic is first create new array to take copy of original array!
        int n = nums.size();
        vector <int> ans;
      for ( int i=0;i<n;i++)  {
        ans.push_back( nums[i]);
      }
for(int i=0;i<n;i++){
    ans.push_back(nums[i]);
}
      return ans;

    }
};