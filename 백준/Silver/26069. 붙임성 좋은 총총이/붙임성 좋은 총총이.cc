#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	set<string> member;
	int input, check = 0;
	cin >> input;
	for (int i = 0; i < input; i++) {
		string temp1, temp2;
		cin >> temp1 >> temp2;
		/*if (temp1 == "ChongChong" || temp2 == "ChongChong") {
			check = 1;
		}*/
		if ((temp1 == "ChongChong" || temp2 == "ChongChong") || (member.find(temp1) != member.end() || member.find(temp2) != member.end())){
			member.insert(temp1);
			member.insert(temp2);
		}
	}
	cout << member.size() << '\n';
	return 0;
}