#include <stdio.h>

int main(void) {
	int reps;
	int result = 0; //그룹단어 개수
	scanf("%d", &reps);

	for (int i = 0; i < reps; i++) { // 사용자가 입력한 반복횟수만큼 진행
		int grp = 1; //그룹단어를 구분하기 위한 변수. 그룹단어가 아닐 시 음수가 저장됨.
		int front = 0; //배열의 앞에서부터 문자를 저장하기 위한 변수. 그룹단어 하나당 +1
		char word[100] = { 0 }; //입력단어를 저장하는 배열
		char target[100] = { 0 }; //그룹단어를 저장하는 배열
		scanf("%s", word);
		for (int j = 0; word[j] != 0; j++) { // 문자열의 끝까지 반복
			for (int k = 0; target[k] != 0; k++) {
				if (word[target[k]-1] == word[j]) {
					
					grp = 0;
					break;
				}
			}
			if (grp == 0) break;
			int cnt = 0;
			target[front] = j + 1;//그 문자를 저장하고, 비교할 때 저장한 문자가 나오면 반복문 continue
			//첫 글자부터 2개이상의 그룹단어가 나오면 j가 0임 //target[k]가 0이라 반복문 진행하지않음
			front++;
			
			if (word[j] == word[j + 1]) { // 바로 뒤에 나오는 문자가 같으면
				for (int i = 1; word[j] == word[j + i]; i++) {
					cnt++;
				}
				j += cnt; // 같은 문자가 나온만큼 j를 증가시켜 비교할 문자를 skip
			}
		}
		result += grp;
	}
	printf("%d", result);
	return 0;
}