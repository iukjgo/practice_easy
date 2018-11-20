https://practice.geeksforgeeks.org/problems/transitive-closure-of-a-graph/0

Transitive closure of a Graph
Submissions: 3895   Accuracy: 19.46%   Difficulty: Easy
     

Given a directed graph, find out if a vertex j is reachable from another vertex i for all vertex pairs (i, j) in the given graph. Here reachable mean that there is a path from vertex i to j. The reach-ability matrix is called transitive closure of a graph.

Input:
First line consists of T test cases. First line of every test case consists of N , denoting number of vertices. Second line consists of N*N spaced integer(Only 0 and 1), denoting the edge b/w i to j.

Output:
Single line output, print the trasitive closure formed of graph.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
1
4
1 1 0 1 0 1 1 0 0 0 1 1 0 0 0 1
Output:
1 1 1 1 0 1 1 1 0 0 1 1 0 0 0 1