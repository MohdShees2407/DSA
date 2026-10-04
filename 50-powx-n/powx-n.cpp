class Solution {
public:
    double pow(double x, long long n)
    {
        if(n == 0) return 1;
        if(n == 1) return x;

        double temp = pow(x, n / 2);

        if(n % 2 != 0) return temp * temp * x;
        else return temp * temp;
    }

    double myPow(double x, int n)
    {
        long long exp = n;
        if(exp < 0) {
            return 1.0 / pow(x, -exp);
        }
        return pow(x, exp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna