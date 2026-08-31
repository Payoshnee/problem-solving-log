class Solution {
public:
  bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    if (source == destination) return true;
    vector<vector<int>> adj(n);
    for (auto& edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    if (adj[destination].empty()) return false;
    vector<int> visited(n, 0);
    queue<int> q;
    
    q.push(source);
    visited[source] = 1;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        if (curr == destination) return true;

        for (int neighbor : adj[curr]) {
            if (!visited[neighbor]) {
                if (neighbor == destination) return true; 
                
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
    return false; 
}
};