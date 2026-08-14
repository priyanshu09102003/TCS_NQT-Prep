#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];
int nodes, edges;


//BFS
vector<int> bfsTraversal(int start){
    vector<int>result;
    vector<bool> visited(nodes+1, false);

    queue<int>q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        result.push_back(curr);

        for(int neighbor : adj[curr]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return result;
}

//DFS
void helperDFS(int node, vector<bool>& visited, vector<int>& result){
    visited[node] = true;
    result.push_back(node);

    for(int neighbor : adj[node]){
        if(!visited[neighbor]){
            helperDFS(neighbor, visited, result);
        }
    }
}

vector<int> dfsTraversal(int start){
    vector<int> result;
    vector<bool>visited(nodes+1, false);

    helperDFS(start, visited, result);

    return result;

}

void print(vector<int>& arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<'\n';
}

int main(){
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;

    cout<<"Enter the starting Node: ";
    cin>>start;
    cout<<'\n';

    vector<int>bfs = bfsTraversal(start);
    vector<int>dfs = dfsTraversal(start);

    cout<<"BFS Traversal: "; print(bfs);
    cout<<"DFS Traversal: "; print(dfs);
}