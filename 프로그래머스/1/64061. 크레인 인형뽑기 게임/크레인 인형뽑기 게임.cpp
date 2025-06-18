#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> input;
    for(int i = 0; i < moves.size(); i++){//1,5,3,5,1,2,1,4
        for(int j = 0; j < board.size(); j++){//5
            if(board[j][moves[i] - 1] != 0){
                if(input.size() == 0){
                    input.push_back(board[j][moves[i] - 1]);
                    board[j][moves[i] - 1] = 0;
                    break;
                }
                else {
                    input.push_back(board[j][moves[i] - 1]);
                    board[j][moves[i] - 1] = 0;
                    while(input.size() >= 2 && input[input.size()-1] == input[input.size()-2]){
                        input.pop_back();
                        input.pop_back();
                        answer += 2;
                    }
                    break;
                }
            } 
        }
    }
    return answer; //4,3,1,3,4,2,4,0,0,5969,0,
}