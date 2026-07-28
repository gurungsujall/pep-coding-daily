class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& edges) {

        // Adjacency list
        vector<vector<int>> adj(V);

        // Build graph
        // b -> a
        for (int i = 0; i < edges.size(); i++) {

            int a = edges[i][0];
            int b = edges[i][1];

            adj[b].push_back(a);
        }

        // Store indegree of every course
        vector<int> indeg(V, 0);

        // Calculate indegree
        for (int i = 0; i < V; i++) {

            for (int v : adj[i]) {

                indeg[v]++;
            }
        }

        queue<int> q;

        // Push all courses having indegree 0
        for (int i = 0; i < V; i++) {

            if (indeg[i] == 0) {

                q.push(i);
            }
        }

        vector<int> ans;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            ans.push_back(node);

            // Remove outgoing edges
            for (int nbr : adj[node]) {

                indeg[nbr]--;

                if (indeg[nbr] == 0) {

                    q.push(nbr);
                }
            }
        }

        // If every course was processed,
        // there is no cycle.
        return ans.size() == V;
    }
};