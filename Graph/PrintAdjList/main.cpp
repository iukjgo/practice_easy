#include <iostream>
#include <vector>
#include <algorithm>
#include "PrintAdjList.h"
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int V;
        int E;
        cin >> V >> E;
        Graph g(V, E);
        
        for (int i=0; i<E; i++) {
            int u;
            int v;
            
            cin >> u >> v;
            g.addEdge(u, v);
        }
        
        
        PrintAdjList::print(g);
        
    }
    return 0;
}
