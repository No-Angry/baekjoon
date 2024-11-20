#include <string>
#include <vector>

using namespace std;

int solution(string n_str) {
    int answer = 0, sqr = 1;
    for(int i = n_str.length() - 1; i >= 0; i--){
        answer += (n_str[i] - '0') * sqr;
        sqr *= 10;
    }
    return answer;
}