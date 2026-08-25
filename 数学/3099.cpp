class Solution {
public:
    int cal(int num) {
        int sum=0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int sumOfTheDigitsOfHarshadNumber(int x) {
        int c = cal(x);
        return (x % c == 0) ? c : -1;
    }
};
