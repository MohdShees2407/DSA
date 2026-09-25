class Solution {
public:
    long long MOD = 1e9 + 7;

    long long power(long long num, long long exp)
    {
        if(exp == 0)
            return 1;

        long long ans = power(num, exp / 2);

        ans = (ans * ans) % MOD;

        if(exp % 2 == 1)
            ans = (ans * num) % MOD;

        return ans;
    }

    int countGoodNumbers(long long n)
    {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long ans = (power(5, even) * power(4, odd)) % MOD;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna