#include<bits/stdc++.h>
using namespace std;
#define max 15

bool arr[max][max];

bool check_cover(int V, int k, int E) {
   int set = (1 << k) - 1;
   int limit = (1 << V);
   bool vis[max][max];
   while (set < limit) {
      memset(vis, 0, sizeof vis);
      int count = 0;
      for (int j = 1, v = 1 ; j < limit ; j = j << 1, v++) {
         if (set & j) {
            for (int k = 1 ; k <= V ; k++) {
               if (arr[v][k] && !vis[v][k]) {
                  vis[v][k] = 1;
                  vis[k][v] = 1;
                  count++;
               }
            }
         }
      }
      if (count == E)
         return true;
      int c = set & -set;
      int r = set + c;
      set = (((r^set) >> 2) / c) | r;
   }
   return false;
}

int find_cover(int n, int m) {
   int left = 1, right = n;
   while (right > left){
      int mid = (left + right) >> 1;
      if (check_cover(n, mid, m) == false)
         left = mid + 1;
      else
         right = mid;
   }
   return left;
}

void add_edge(int u, int v) {
   arr[u][v] = 1;
   arr[v][u] = 1;
}

int main() {
   memset(arr, 0, sizeof arr);
   int V = 6, E = 5;
   add_edge(2, 3);
   add_edge(2, 4);
   add_edge(3, 5);
   add_edge(4, 5);
   add_edge(4, 6);
   cout << "Size of Minimum Vertex Cover : " << find_cover(V, E) << endl;
   return 0;
}
