#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 7;
vector <pair<int, int>> adj[N];

void dijkstra(int source, int &n){
    
    priority_queue <pair<int, int>> pq;
    vector <int> dist(n, 1e18);
    
    pq.push({0, source});
    dist[source] = 0;

    while(!pq.empty()){
        pair <int, int> x = pq.top();
        
        int d = -x.first;
        int node = x.second;

        if(dist[node] < d){
            pq.pop();
            continue;
        }

        for(auto u : adj[node]){
            if(dist[u.first] > d + u.second){
                dist[u.first] = d + u.second;
                pq.push({-dist[u.first], u.first});
            }
        }

        pq.pop();
    }

    for(auto u : dist){
        cout << u << " ";
    }
}


signed main(){


    int N, M;
    cin >> N >> M;

    for(int i = 0; i < M; ++i){
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        adj[u].push_back({v, w});
    }

    dijkstra(0, N);

    return 0;
}
