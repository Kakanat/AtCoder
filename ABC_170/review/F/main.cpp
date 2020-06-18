#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

const long long INF = 1e18;
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  int si, sj, ti, tj;
  cin >> si >> sj >> ti >> tj;
  --si; --sj; --ti; --tj;
  vector<string> g(h);
  for (int i = 0; i < h; ++i) cin >> g[i];

  auto toId = [&](int i, int j, int v) {
    return (i*w+j)*4 + v;
  };
  auto modCeilK = [&](long long x) {
    return (x + k - 1) / k * k;
  };

  vector<long long> dist(h*w*4, INF);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
  auto push = [&](int i, int j, int v, long long x) {
    int id = toId(i, j, v);
    if (dist[id] <= x) return;
    dist[id] = x;
    q.emplace(x,id);
  };
  for (int v = 0; v < 4; ++v) push(si, sj, v, 0);
  while (!q.empty()) {
    long long d = q.top().first;
    int id = q.top().second;
    q.pop();
    if (dist[id] != d) continue;
    int i = id / w / 4;
    int j = id / 4 % w;
    int v = id % 4;
    for (int nv = 0; nv < 4; ++nv) {
      push(i, j, nv, modCeilK(d));
      int ni = i+di[v], nj = j+dj[v];
      if (0 <= ni && ni < h && 0 <= nj && nj < w) {
        if (g[ni][nj] == '.') {
          push(ni, nj, v, d+1);
        }
      } 
    }
  }

  long long ans = INF;
  for (int v = 0; v < 4; ++v) ans = min(ans, dist[toId(ti, tj, v)]);
  if (ans == INF) cout << -1 << endl;
  else {
    ans = modCeilK(ans)/k;
    cout << ans << endl;
  }
  return 0;
}