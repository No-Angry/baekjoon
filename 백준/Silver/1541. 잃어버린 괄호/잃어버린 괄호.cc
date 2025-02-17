#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s, temp;
	int result = 0, state = 0, temp_res = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		temp = "";
		while (s[i] != '+' && s[i] != '-' && s[i] != 0) {
			temp += s[i];
			i++;
		}
		if (state) {
			temp_res += stoi(temp);
			if (s[i] == '-' || s[i] == 0) { // minus를 만나면
				result -= temp_res; // 결괏값에서 더한 데이터들을 빼 줌.
				temp_res = 0;
			}
		}
		else {
			if (s[i] == '-') state = 1;
			result += stoi(temp);
		}
	}
	cout << result << '\n';
	return 0;
}