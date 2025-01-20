#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<string> member;
	int input, cnt = 0;
	cin >> input;
	for (int i = 0; i < input; i++) {
		string temp;
		cin >> temp;
		//auto check = find(member.begin(), member.end(), temp);
		if (temp == "ENTER") {
			cnt += member.size();
			member.erase(member.begin(), member.end());
		}
		/*else if (check == member.end()) {
			member.insert(temp);
		}*/
		else member.insert(temp);
	}
	cnt += member.size();
	cout << cnt	<< '\n';
	return 0;
}