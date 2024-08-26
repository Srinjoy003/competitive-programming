vector <llt> calculatePrefix(vector <llt> arr) {
    llt n = arr.size();
    vector < llt > prefix(n + 1, 0);

    for (llt i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    return prefix;
}


vector<vector<llt>> computePrefixSum(const vector<vector<llt>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<llt>> prefixSum(m, vector<llt>(n, 0));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            prefixSum[i][j] = matrix[i][j]
                + (i > 0 ? prefixSum[i-1][j] : 0)
                + (j > 0 ? prefixSum[i][j-1] : 0)
                - (i > 0 && j > 0 ? prefixSum[i-1][j-1] : 0);
        }
    }

    return prefixSum;
}
