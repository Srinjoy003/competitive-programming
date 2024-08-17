
void buildMaxTree(vector<llt>& tree, vector<llt>& arr, llt node, llt start, llt end) {
    if (start == end) {
        tree[node] = arr[start];
    } else {
        llt mid = start + (end - start) / 2;
     
        buildMaxTree(tree, arr, 2 * node + 1, start, mid);
        buildMaxTree(tree, arr, 2 * node + 2, mid + 1, end);
       
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }
}

llt queryMax(vector<llt>& tree, llt node, llt start, llt end, llt L, llt R) {
    if (start > R || end < L) {
        return LLONG_MIN;  
    }
  
    if (start >= L && end <= R) {
        return tree[node];
    }

   
    llt mid = start + (end - start) / 2;
    llt leftQuery = queryMax(tree, 2 * node + 1, start, mid, L, R);
    llt rightQuery = queryMax(tree, 2 * node + 2, mid + 1, end, L, R);
    return max(leftQuery, rightQuery);
}


// ---------------Min Tree ---------------------------------------------------------------------------

void buildMinTree(vector<llt>& tree, vector<llt>& arr, llt node, llt start, llt end) {
    if (start == end) {
        tree[node] = arr[start];
    } else {
        llt mid = start + (end - start) / 2;

        buildMinTree(tree, arr, 2 * node + 1, start, mid);
        buildMinTree(tree, arr, 2 * node + 2, mid + 1, end);

        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }
}



llt queryMin(vector<llt>& tree, llt node, llt start, llt end, llt L, llt R) {
    
    if (start > R || end < L) {
        return LLONG_MAX;  
    }
 
    if (start >= L && end <= R) {
        return tree[node];
    }

    llt mid = start + (end - start) / 2;
    llt leftQuery = queryMin(tree, 2 * node + 1, start, mid, L, R);
    llt rightQuery = queryMin(tree, 2 * node + 2, mid + 1, end, L, R);
    return min(leftQuery, rightQuery);
}

int main() {
 
    llt n, q, l, r;
    cin >> n;

    vector <llt> A(n);

    for (llt i = 0; i < n; i++) {
        cin >> A[i];
      
    }
  
    vector<llt> maxTree(4 * n);
    vector<llt> minTree(4 * n);

    buildMaxTree(maxTree, A, 0, 0, n - 1);
    buildMinTree(minTree, A, 0, 0, n - 1);

    llt minQ = queryMin(minTree, 0, 0, n-1, l, r);
    llt maxQ = queryMax(maxTree, 0, 0, n-1, l, r)


    return 0;
}
