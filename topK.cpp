class Solution {
  public:
    vector<int> topKfrequent(vector<int>& nums, int k) {
      int result = 0;
      int resultIndex;
      int prevResult = 0;
      unordered_map<int, int> map;
      vector<int> res;
      for(int n : nums) {
        map[n]++;
      }
      for(int i = 0; i < k; i++) {
        for(int j = -1; j < map.size(); j++) {
          if(map[j] > map[result]) {
            result = j;
            resultIndex = result;
          }
        }
        res.push_back(result);
        map[resultIndex] = 0;
      }
      return res;
    }
}
