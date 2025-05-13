class Solution {
    static final int MOD = 1000000007;

    public static long numOfWays(int N, int M) {
        long total = (long) N * M;
        long totalWays = (total * (total - 1)) % MOD;

        long attacks = 0;
        if (N >= 2 && M >= 3)
            attacks += 4L * (N - 1) * (M - 2);
        if (N >= 3 && M >= 2)
            attacks += 4L * (N - 2) * (M - 1);

        long result = (totalWays - attacks + MOD) % MOD;
        return result;
    }
}
//Explain to be what is balck and white
