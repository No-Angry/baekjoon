#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sq = 1 , re_sq = 1; //sq = 최대 자릿수, re_sq = 반전된 자릿수
    
    while(sq * 3 <= n){
        sq *= 3;
    } // 자릿수 추가(기본 1자리)
    
    while(sq > 0){
        answer += (n / sq) * re_sq; // 81 = 1, 27 = 3, 9 = 9, 3 = 27, 1 = 81
        n %= sq;
        re_sq *= 3;
        sq /= 3;
    }
    return answer;
}