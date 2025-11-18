vector<vector<llt>> st;   // sparse table
vector<int> lg;           // precomputed logs

// Build sparse table for range maximum queries
void buildSparseTable(const vector<llt> &arr) {
    int n = arr.size();

    // Precompute logs
    lg.resize(n + 1);
    lg[1] = 0;
    for (int i = 2; i <= n; i++)
        lg[i] = lg[i / 2] + 1;

    int K = lg[n] + 1; // max power of 2
    st.assign(n, vector<llt>(K));

    // Level 0: segment length = 1
    for (int i = 0; i < n; i++)
        st[i][0] = arr[i];

    // Build for all k
    for (int k = 1; k < K; k++) {
        for (int i = 0; i + (1LL << k) <= n; i++) {
            st[i][k] = max(
                st[i][k - 1],
                st[i + (1LL << (k - 1))][k - 1]
            );
        }
    }
}

// Query maximum in range [L, R]
llt queryMax(int L, int R) {
    int len = R - L + 1;
    int k = lg[len];
    return max(
        st[L][k],
        st[R - (1LL << k) + 1][k]
    );
}
