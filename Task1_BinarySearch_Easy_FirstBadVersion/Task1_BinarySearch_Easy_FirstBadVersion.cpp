class Solution {
public:
    int firstBadVersion(int n) {
        long int left = 1, right = n, middle;
        if (isBadVersion(left)) {
            return left;
        }
        while (left < right - 1) {
            middle = (right + left) / 2;
            if (isBadVersion(middle)) {
                right = middle;
            }
            else {
                left = middle;
            }
        }
        return right;
    }
};
