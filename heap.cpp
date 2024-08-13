#include <bits/stdc++.h>
using namespace std;
#define llt long long int

// Custom comparator to sort by A[i] - B[i] but store A[i]
struct Compare {
    vector<llt>& A;
    vector<llt>& B;

    Compare(vector<llt>& A, vector<llt>& B) : A(A), B(B) {}

    bool operator()(int i, int j) {
        return (A[i] - B[i]) > (A[j] - B[j]);
    }
};

int main() {
    llt t;
    cin >> t;

    while (t--) {
        llt n, r;
        cin >> n >> r;
        vector<llt> A(n);
        vector<llt> B(n);

        for (llt i = 0; i < n; i++) {
            cin >> A[i];
        }

        for (llt i = 0; i < n; i++) {
            cin >> B[i];
        }

        // Min-heap using indices and custom comparator
        priority_queue<int, vector<int>, Compare> minHeap(Compare(A, B));

       
    }

    return 0;
}
