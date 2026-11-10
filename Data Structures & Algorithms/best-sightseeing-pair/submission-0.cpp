class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
// by  brute force 
int maxscore = 0;
for ( int i=0;i<values.size();i++){
   for (int j=i+1;j<values.size();j++){
    int score = values[i]+values[j] -(j-i);
    maxscore = max(maxscore,score);

   }
}
    return maxscore;
    }
};
