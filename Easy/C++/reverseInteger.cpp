class Solution {
public:
    int reverse(int x) {
        if (x == 0) return 0;

        bool negative = x < 0 ? true : false;
        int stop = negative ? 1 : 0;
        string xStr = to_string(x);
        string solutionStr = "";

        for (int i = xStr.length() - 1; i >= stop; i--) {
            if (xStr.at(i) != 0) solutionStr += xStr.at(i);
        }

        long check = stol(solutionStr);

        if (check >= 2147483647) return 0;

        int solution = stoi(solutionStr);

        if (negative) {
            return solution *= -1;
        }
        else {
            return solution;
        }
    }
};