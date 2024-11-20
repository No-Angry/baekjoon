#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    for(int i = 0; i < my_string.length(); i++){
        string str = "";
        do{
            str += my_string[i];
            i++;
            if(i >= my_string.length()) break;
        }while(my_string[i] != ' ');
        answer.push_back(str);
    }
    return answer;
}