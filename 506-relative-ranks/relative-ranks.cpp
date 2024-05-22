class Solution {
public:
  vector<string> findRelativeRanks(vector<int>& score) {
 
    vector<int> sortedScore = score;
    sort(sortedScore.rbegin(), sortedScore.rend());

    vector<string> ranks(score.size());
    for (int i = 0; i < score.size(); ++i) {
      int j = find(sortedScore.begin(), sortedScore.end(), score[i]) - sortedScore.begin();
      if (j == 0) {
        ranks[i] = "Gold Medal";
      } else if (j == 1) {
        ranks[i] = "Silver Medal";
      } else if (j == 2) {
        ranks[i] = "Bronze Medal";
      } else {
        ranks[i] = to_string(j + 1);
      }
    }
    return ranks;
  }
};
