

void initializeDiffArray(vector<llt>& arr, vector<llt>& diff) {
    diff[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        diff[i] = arr[i] - arr[i - 1];
    }
}

void rangeUpdate(vector<llt>& diff, int l, int r, llt x) {
    diff[l] += x;
    if (r + 1 < diff.size()) {
        diff[r + 1] -= x;
    }
}

void applyUpdates(vector<llt>& arr, vector<llt>& diff) {
    arr[0] = diff[0];
    for (int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i - 1] + diff[i];
    }
}

int main() {
    vector<llt> arr = {3, 8, 6, 2, 7};
    vector<llt> diff(arr.size() + 1, 0);

    initializeDiffArray(arr, diff);

    rangeUpdate(diff, 1, 3, 10);

    applyUpdates(arr, diff);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
