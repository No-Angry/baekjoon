#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int flag;
    for(int i = left; i <= right; i++){
        flag = 0;
        for(int j = 1; j * j <= i; j++) if(j * j == i) flag = 1;
        answer += (flag ? -i : i); 
    }
    return answer;
}