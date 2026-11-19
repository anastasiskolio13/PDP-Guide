#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;

int main()
{
	int N;
	int M;

	cin >> N >> M;

	vector<vector<pair<int, int>>> AdjR(N);

	for (int i = 0; i < M; ++i)
	{
		int v;
		int u;
		int w;

		cin >> v >> u >> w;

		AdjR[u - 1].push_back(make_pair(v - 1, w));
	}

	vector<vector<int>> dp(2, vector<int>(N));

	dp[0][0] = 0;

	for (int v = 1; v < N; ++v)
	{
		dp[0][v] = INF;
	}

	for (int i = 1; i < N; ++i)
	{
		for (int v = 0; v < N; ++v)
		{
			dp[i % 2][v] = dp[(i - 1) % 2][v];

			for (auto [u, w] : AdjR[v])
			{
				dp[i % 2][v] = min(dp[i % 2][v], dp[(i - 1) % 2][u] + w * (dp[(i - 1) % 2][u] != INF));
			}
		}
	}

	for (int v = 0; v < N; ++v)
	{
		if (dp[(N - 1) % 2][v] != INF)
		{
			cout << dp[(N - 1) % 2][v] << " ";
		}
		else
		{
			cout << 30000 << " ";
		}
	}
}