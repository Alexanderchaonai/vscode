#include <iostream>
using namespace std;

static const int MAXN = 5000;
bool installed[MAXN + 1];
vector<int> adj[MAXN + 1];  // 记录依赖关系：x -> v 表示 x 依赖 v

// 递归函数 f(x)，将包 x 及其所有依赖安装
void f(int x) {
    if (installed[x]) return;     // 若已安装，直接返回
    for (int v : adj[x]) {       // 安装 x 的所有依赖
        f(v);
    }
    installed[x] = true;         // 安装 x 本身
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    // 读入 N 个包及其依赖
    for (int i = 1; i <= N; i++) {
        int K;
        cin >> K;
        while (K--) {
            int v;
            cin >> v;
            adj[i].push_back(v);  // i 依赖 v
        }
    }

    // 安装包 1
    f(1);

    // 统计已安装的包数量
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (installed[i]) ans++;
    }
    cout << ans << "\n";

    return 0;
}