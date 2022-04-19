class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    vector<int> result;
    bool c = false;
    int lD = digits.at(digits.size() - 1), i = digits.size() - 2;

    if (lD == 9) {
      result.push_back(0);
    } else {  // job is done
      digits.at(digits.size() - 1)++;
      return digits;
    }

    while ((i >= 0) && (digits.at(i) == 9)) {
      result.push_back(0);
      i--;
    }

    if (i >= 0) {
      result.push_back(digits.at(i) + 1);
      for (int j = i - 1; j >= 0; j--) result.push_back(digits.at(j));
    } else {
      result.push_back(1);
    }

    reverse(result.begin(), result.end());

    return result;
  }
};