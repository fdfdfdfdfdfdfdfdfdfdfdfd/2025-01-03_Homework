#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // 벡터와 맵 데이터 정의
    vector<int> etude = { 10, 20, 30, 40, 50 };
    map<string, int> zdo = 
    {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 95}, 
        {"Aeon", 90}
    };

    // 문제: 아래 부분을 완성하세요
    // 벡터는 3번째꺼, 마지막꺼 지우고 순방향 반복자 출력
    // 맵은 역방향 반복자로 출력

    etude.erase(etude.begin() + 2);
    etude.pop_back();
    etude.push_back(12);

    sort(etude.begin(), etude.end());

    for(auto add = etude.begin(); add != etude.end(); ++add)
    {
        cout << "벡터 오름차순 정렬 : " << *add << endl;
    }

    for (auto add = etude.rbegin(); add != etude.rend(); ++add)
    {
        cout << "벡터 내림차순 정렬 : " << *add << endl;
    }


    for(auto rsort = zdo.begin(); rsort != zdo.end(); ++rsort)
    {
        cout << rsort->first << " : " << rsort->second << endl;
    }

    for (auto rsort = zdo.rbegin(); rsort != zdo.rend(); ++rsort)
    {
        cout << rsort->first << " : " << rsort->second << endl;
    }

    return 0;
}