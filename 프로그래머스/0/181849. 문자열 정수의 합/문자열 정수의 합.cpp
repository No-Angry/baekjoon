#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(int i = num_str.length() - 1; i >= 0; i--){
        answer += num_str[i] - '0';
    }
    return answer;
}