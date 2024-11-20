#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    if(arr1.size() != arr2.size()){
        answer = (arr1.size() > arr2.size()) ? 1 : -1;
    }
    else{
        int sum1 = accumulate(arr1.begin(), arr1.end(), 0);
        int sum2 = accumulate(arr2.begin(), arr2.end(), 0);
        answer = (sum1 == sum2) ? 0 : ((sum1 > sum2) ? 1 : -1);
    }
    return answer;
}