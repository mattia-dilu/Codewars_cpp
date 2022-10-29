class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        int x;
        while(n != 0){
            x = n % 10;
            sum += x;
            prod *= x;
            n /= 10;
        }
        return prod - sum;
    }
};
