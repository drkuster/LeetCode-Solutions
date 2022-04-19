class Solution {
 public:
  int fixedPoint(vector<int>& arr) {
    int l = 0, r = arr.size() - 1, min = -1, m;

    while (l < r) {
      m = (l + r) / 2;

      if (arr.at(m) == m) {  // found at least one match but we might be able to
                             // do better, move left
        r = m - 1;
        min = arr.at(m);
      } else if (arr.at(m) < m) {  // too far left, move right
        l = m + 1;
      } else {  // only option is to move left
        r = m - 1;
      }
    }

    if ((l == r) && (arr.at(l) == l)) {
      min = arr.at(l);
    }

    return min;
  }
};