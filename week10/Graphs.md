#Graph assignment

![Untitled Diagram drawio](https://github.com/user-attachments/assets/e7d312f5-edc3-4307-a45f-54eec612a24f)


'''cpp
#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

// Graph using characters directly
map<char, vector<char>> adj = {
    {'A', {'B', 'E'}},
    {'B', {'A', 'C'}},
    {'C', {'B', 'D'}},
    {'D', {'C', 'E'}},
    {'E', {'A', 'D'}}
};

// Breadth-First Search (BFS)
void bfs(char start) {
    map<char, bool> visited;
    queue<char> q;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        char v = q.front();
        q.pop();
        cout << v << " ";

        for (char u : adj[v]) {
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
    cout << endl;
}

int main() {
    cout << "Starting from vertex A:\n";
    bfs('A'); // Start from A
    return 0;
}
'''
