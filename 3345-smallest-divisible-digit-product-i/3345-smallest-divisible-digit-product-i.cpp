class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = n; i < 110; i++) {
            int temp = i;
            int pr = 1;
            while (temp != 0) {
                int digit = temp % 10;
                pr = pr * digit;
                temp /= 10;
            }
            if (pr % t == 0) {
                return i;
            }
        }
        return 0;
    }
};