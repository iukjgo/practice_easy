https://practice.geeksforgeeks.org/problems/print-adjacency-list/0

Print adjacency list Submissions: 7665   Accuracy: 31.59%   Difficulty: Easy
     
Given a bidirectional graph.Your task is to print the adjacency list for each vertex.

Input:

The first line of input is T denoting the number of testcases.Then each of the T lines contains two positive integer V and E where 'V' is the number of vertex and 'E' is number of edges in graph.Next 'E' line contains two positive numbers showing that there is an edge between these two vertex.

Output:

For each vertex, print their connected nodes in order you are pushing them inside the list . See the  given  example.

Constraints:

1<=T<=200

1<=V<=100

1<=E=V*(V-1)

Example:

Input:

1

5 7

0 1

0 4

1 2

1 3

1 4

2 3

3 4

Output:


0-> 1-> 4
1-> 0-> 2-> 3-> 4
2-> 1-> 3
3-> 1-> 2-> 4
4-> 0-> 1-> 3


