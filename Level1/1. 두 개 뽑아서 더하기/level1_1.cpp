#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 제출 코드
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    sort(numbers.begin(), numbers.end());   // 정렬
    
    for(int i=0; i<numbers.size()-1; i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());   // 중복 제거
    
    return answer;
}

// 수정 전 코드
vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int>::iterator iter;
    
    sort(numbers.begin(), numbers.end());   // 정렬
    
    for(int i=0; i<numbers.size()-1; i++) {
        for(int j=i+1; j<numbers.size(); j++) {
            int nVal = numbers[i] + numbers[j];
            iter = find(answer.begin(), answer.end(), nVal);
            if(iter == answer.end()) {  // 합 존재하지 않으면 추가
                answer.push_back(nVal);
            }
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}
