class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    int i = digits.size() - 1;

    while ((i >= 0) && (digits.at(i) == 9)) {
      digits.at(i) = 0;
      i--;
    }

    if (i < 0) {
      digits.insert(digits.begin(), 1);
      return digits;
    }

    digits.at(i)++;
    return digits;
  }
};