#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Graph
{
public:
   Graph(int v) : 
      mAdj(v),
      mVisited(v, 0),
      mVertices(v),
      mEdges(0)
   {};

   const int getVerticesCount() const { return mVertices; }
   void addEdge(int u, int v) {
      mAdj[u].push_back(v);
   };

   bool doesPathExist(int u, int v);
private:
   vector<vector<int>> mAdj;
   vector<int> mVisited;

   int mVertices;
   int mEdges;
};

class TransitiveClosureSolver
{
public:
   static void solve(Graph& g);
};


bool
Graph::doesPathExist(int s, int t)
{
   /* BFS */
   if (s == t) return true;

   for (int i = 0; i < mVertices; i++) {
      mVisited[i] = 0;
   }

   queue<int> que;
   que.push(s);

   while (!que.empty()) {
      int u = que.front();
      que.pop();

      mVisited[u] = 1;
      for (int i = 0; i < mAdj[u].size(); i++) {
         int v = mAdj[u][i];
         if (v == t) return true;

         if (!mVisited[v]) {
            que.push(v);
         }
      }
   }

   return false;
}

void
TransitiveClosureSolver::solve(Graph& g)
{
   for (int u = 0; u < g.getVerticesCount(); u++) {
      for (int v = 0; v < g.getVerticesCount(); v++) {
         if (g.doesPathExist(u, v))
            cout << "1 ";
         else
            cout << "0 ";
      }
   }
   cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int V;
        int E;
        cin >> V;
        Graph g(V);
        
        for (int u = 0; u < V; u++) {
           for (int v = 0; v < V; v++) {
              int edge = 0;
              cin >> edge;
              if (edge == 1)
                 g.addEdge(u, v);
           }
        }
        
         TransitiveClosureSolver::solve(g);
    }
    return 0;
}
