vector <llt> calculatePrefix(vector <llt> arr) {
    llt n = arr.size();
    vector < llt > prefix(n + 1, 0);

    for (llt i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    return prefix;
}
