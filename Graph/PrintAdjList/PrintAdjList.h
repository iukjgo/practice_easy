#ifndef PrintAdjList_h
#define PrintAdjList_h

#include <iostream>
#include <vector>


class Graph {
public:
    Graph(int vertices, int edges) : mVertices(vertices), mEdges(edges), mAdj(vertices) {
    
    };
    void addEdge(int u, int v);
    const std::vector<int>* getAdjList(int u) const;
    
    const int getVerticesCount() const { return mVertices; }
private:
    std::vector<std::vector<int>> mAdj;
    int mVertices;
    int mEdges;
};  

class PrintAdjList {
public:
    PrintAdjList() {};
    static void print(const Graph& g);
private:
    
};



#endif /* PrintAdjList_h */
