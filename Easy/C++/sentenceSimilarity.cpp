class Solution {
 public:
  bool areSentencesSimilar(vector<string>& sentence1, vector<string>& sentence2,
                           vector<vector<string>>& similarPairs) {
    if (sentence1.size() == sentence2.size()) {
      for (int i = 0; i < sentence1.size(); i++) {
        string a = sentence1.at(i);
        string b = sentence2.at(i);

        if (a == b) {
          continue;
        }

        string pair[2] = {a, b};
        bool okay = false;

        for (int j = 0; j < similarPairs.size(); j++) {
          if ((pair[0] == similarPairs.at(j).at(0)) &&
              (pair[1] == similarPairs.at(j).at(1))) {
            okay = true;
            break;
          } else if ((pair[0] == similarPairs.at(j).at(1)) &&
                     (pair[1] == similarPairs.at(j).at(0))) {
            okay = true;
            break;
          }
        }

        if (okay) {
          continue;
        }

        return false;
      }
      return true;
    }
    return false;
  }
};