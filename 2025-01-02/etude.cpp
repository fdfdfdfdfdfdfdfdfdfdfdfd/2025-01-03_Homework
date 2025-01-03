#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // ���Ϳ� �� ������ ����
    vector<int> etude = { 10, 20, 30, 40, 50 };
    map<string, int> zdo = 
    {
        {"Alice", 90},
        {"Bob", 85},
        {"Charlie", 95}, 
        {"Aeon", 90}
    };

    // ����: �Ʒ� �κ��� �ϼ��ϼ���
    // ���ʹ� 3��°��, �������� ����� ������ �ݺ��� ���
    // ���� ������ �ݺ��ڷ� ���

    etude.erase(etude.begin() + 2);
    etude.pop_back();
    etude.push_back(12);

    sort(etude.begin(), etude.end());

    for(auto add = etude.begin(); add != etude.end(); ++add)
    {
        cout << "���� �������� ���� : " << *add << endl;
    }

    for (auto add = etude.rbegin(); add != etude.rend(); ++add)
    {
        cout << "���� �������� ���� : " << *add << endl;
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