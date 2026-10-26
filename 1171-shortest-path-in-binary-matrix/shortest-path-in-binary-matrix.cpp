class Solution {
public:
    typedef pair<int, pair<int, int>> p;

    vector<vector<int>> directions{
        {1, 1}, {0, 1}, {1, 0}, {0, -1},
        {-1, 0}, {-1, -1}, {1, -1}, {-1, 1}
    };

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        if (m == 0 || n == 0 || grid[0][0] != 0)
            return -1;

        if (grid[m - 1][n - 1] != 0)
            return -1;

        auto issafe = [&](int x, int y) {
            return x >= 0 && x < m && y >= 0 && y < n;
        };

        vector<vector<int>> result(m, vector<int>(n, INT_MAX));

        priority_queue<p, vector<p>, greater<p>> pq;

        pq.push({1, {0, 0}});
        result[0][0] = 1;

        while (!pq.empty()) {
            int d = pq.top().first;
            pair<int, int> node = pq.top().second;
            pq.pop();

            int x = node.first;
            int y = node.second;

            if (x == m - 1 && y == n - 1)
                return d;

            if (d > result[x][y])
                continue;

            for (auto dir : directions) {
                int x_ = x + dir[0];
                int y_ = y + dir[1];

                if (issafe(x_, y_) && grid[x_][y_] == 0) {
                    int dist = 1;

                    if (d + dist < result[x_][y_]) {
                        result[x_][y_] = d + dist;
                        pq.push({d + dist, {x_, y_}});
                    }
                }
            }
        }

        return -1;
    }
};