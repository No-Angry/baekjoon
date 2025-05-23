#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    //bandage[감는시간, 회복량/s, 다 감았을 시 추가회복량]
    //health 최대체력
    //attacks[몬스터][공격시간, 대미지]
    int health_max = health; // 최대체력 저장
    int monster_time = 0;   // 몬스터 인덱스
    int success = 0;
    int time_max = attacks[attacks.size()-1][0];
    
    for(int i = 1; i <= time_max; i++){
        if(i == attacks[monster_time][0]){
            success = 0;
            health -= attacks[monster_time][1];
            monster_time++;
            if(health <= 0) return -1;
        }
        else{
            success++;
            health += bandage[1];
            if(bandage[0] == success){
                health += bandage[2];
                success = 0;
            }
            if(health >= health_max) health = health_max;
        }
    }
    return health;
}