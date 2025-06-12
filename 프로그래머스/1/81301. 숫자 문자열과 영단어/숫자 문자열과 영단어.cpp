#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<int> changed;
    //vector<string> change[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i = 0; i < s.length(); i++){
        if(s[i] - '0' < 10) changed.push_back(s[i] - '0');
        else{
            if(s[i] == 'z'){
                changed.push_back(0);
                i += 3;
            }
            else if(s[i] == 'o'){
                changed.push_back(1);
                i += 2;
            }
            else if(s[i] == 't'){
                if(s[i + 1] == 'w') changed.push_back(2);
                else{
                    changed.push_back(3);
                    i += 2;
                }
                i += 2;
            }
            else if(s[i] == 'f'){
                if(s[i + 1] == 'o') changed.push_back(4);
                else changed.push_back(5);
                i += 3;
            }
            else if(s[i] == 's'){
                if(s[i + 1] == 'i') changed.push_back(6);
                else{
                    changed.push_back(7);
                    i += 2;
                }
                i += 2;
            }
            else if(s[i] == 'e'){
                changed.push_back(8);
                i += 4;
            }
            else if(s[i] == 'n'){
                changed.push_back(9);
                i += 3;
            }
        }
    }
    int square = 1;
    for(int i = changed.size() - 1; i >= 0; i--){
        answer += changed[i] * square;
        square *= 10;
    }
    return answer;
}