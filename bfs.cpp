#include <bits/stdc++.h>
using namespace std;
#define llt long long int

int main() {
    llt t;
    cin >> t;

    llt directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};  // Directions for movement

    while (t--) {
        llt n, m, x1, y1, x2, y2;
        cin >> n >> m;
        
        vector<vector<llt>> A(n, vector<llt>(m, 0));      
        vector<vector<llt>> visited(n, vector<llt>(m, 0)); 

        
        deque<pair<llt, llt>> dq;  
        dq.push_back({x1, y1});
        dq.push_back({x2, y2});
      
        
        while (!dq.empty()) {  
            llt size = dq.size();
            for (llt i = 0; i < size; i++) {
                pair<llt, llt> p = dq.front(); 
                dq.pop_front(); 
                llt x = p.first;
                llt y = p.second;
                
                for (auto dir : directions) {  // Explore all 4 directions
                    llt row = x + dir[0];
                    llt col = y + dir[1];
                    
                    if (row >= 0 && row < n && col >= 0 && col < m && visited[row][col] == 0) {
                        visited[row][col] = 1;
                    
                        dq.push_back({row, col});
                    }
                }
            }
        }
        



    return 0;
}
