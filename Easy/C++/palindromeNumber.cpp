class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) 
            return false;
        else if (x == 0) 
            return true;
        else {
            string xStr = to_string(x);
            for (int i = 0; i < xStr.length() / 2; i++) {
                if (xStr.at(i) != xStr.at(xStr.length() - 1 - i))
                    return false;
            }
            return true;
        }
    }
};