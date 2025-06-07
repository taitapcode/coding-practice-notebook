#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define el '\n'
#define ll long long
#define db double
#define ldb long double
using namespace std;

int n, m, s, e;
vector<int> adj[100005];
int dist[600][600];
const int INF = 1e9;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  cin >> n >> m >> s >> e;
  while (m--) {
    int direct,u, v, distance;
    cin >>direct >> u >> v >> distance;
    if (direct == 1){
      adj[u].push_back(v);
      dist[u][v] = distance;
    } else {
      adj[u].push_back(v);
      adj[v].push_back(u);
      dist[u][v] = distance;
      dist[v][u] = distance;
    }
  }

  vector<int> d(n + 1, INF);
  vector<int> p(n + 1, 0);
  d[s] = 0;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, s});

  while (!pq.empty()) {
    int u = pq.top().second;
    int du = pq.top().first;
    pq.pop();

    if (du != d[u]) continue;

    for (int v : adj[u]) {
      if (d[v] > d[u] + dist[u][v]) {
        d[v] = d[u] + dist[u][v];
        p[v] = u;
        pq.push({d[v], v});
      }
    }
  }

  if (d[e] == INF) {
    cout << -1 << el;
  } else {
    cout << d[e] << " ";
    vector<int> path;
    int curr = e;
    while (curr != 0) {
      path.push_back(curr);
      curr = p[curr];
      if (curr == s){
        path.push_back(s);
        break;
      }
    }
    reverse(path.begin(), path.end());
    for (int node : path) {
      cout << node << " ";
    }
    cout << el;
  }

  return 0;
}
