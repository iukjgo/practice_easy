#include "PrintAdjList.h"

void
Graph::addEdge(int u, int v)
{
    // assume no duplicates are inserted
    mAdj[u].push_back(v);
    mAdj[v].push_back(u);
}

const std::vector<int>*
Graph::getAdjList(int u) const
{
    // no bounds-check
    return &mAdj[u];
}

void
PrintAdjList::print(const Graph& g)
{
    for (int v=0; v<g.getVerticesCount(); v++) {
        std::cout << v;
        const std::vector<int>* curVertexAdjList = g.getAdjList(v);
        for (std::vector<int>::const_iterator itr = curVertexAdjList->begin(); itr != curVertexAdjList->end(); itr++) {
            std::cout << "-> " << (*itr);
        }
        std::cout << std::endl;
    }
}
