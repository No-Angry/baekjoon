#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i = 0; s[i] != '\0'; i++){ //문자열의 끝까지 반복
        for(int j = 0; j < index; j++){ // index만큼 증가
            s[i] += 1;
            if(s[i] > 'z') s[i] = 'a'; // 증가한 후 z보다 크면 a로 변경
            for(int l = 0; l < skip.length(); l++){ // skip에 포함된 글자인지 확인
                if(s[i] == skip[l]){ // skip에 포함되면
                    s[i] += 1;  // +1
                    if(s[i] > 'z') s[i] = 'a';
                    l = -1; // 재검사
                }
            }
        }
        
    }
    return s;
}