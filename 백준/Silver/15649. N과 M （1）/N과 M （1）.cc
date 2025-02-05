#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <numeric>
using namespace std;

void dfs(int in, int s, vector<bool> visited, vector<int> result) { //
	if (s == result.size()) {
		for (int i : result) cout << i << ' ';
		cout << '\n';
		return;
	}
	for (int i = 0; i < in; i++) {
		if (visited[i]) continue; // 방문 여부 체크
		visited[i] = true; // 방문 내역 기록
		result.push_back(i + 1);
		dfs(in, s, visited, result);
		result.pop_back(); // 탐색 완료한 경로를 다시 되돌아가서 다른 경로를 찾음.
		visited[i] = false;// 방문 기록 삭제
	}
}

int main(void) {
	int input, size;
	cin >> input >> size;
	vector<bool> visited(input, false); // 방문 여부
	vector<int> result; // 결과

	dfs(input, size, visited, result);

	return 0;
}