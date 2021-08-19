#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    for(int nIndex=1; nIndex<=n; nIndex++) {
        answer.push_back(x * nIndex);
    }
    
    return answer;
}