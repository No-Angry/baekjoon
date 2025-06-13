#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int sum_n = 0;
    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = 0; j < numbers.size(); j++){
            if(i == j) continue;
            sum_n = numbers[i] + numbers[j];
        if(find(answer.begin(), answer.end(), sum_n) == answer.end()) answer.push_back(sum_n);
        }
    }
    for(int i = 0 ; i < answer.size() - 1; i++){
        for(int j = i + 1; j < answer.size(); j++){
            if(answer[j] < answer[i]){
                swap(answer[j],answer[i]);
            }
        }
    }
    return answer;
}