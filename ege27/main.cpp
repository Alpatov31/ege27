#include <iostream>
#include <vector>

using namespace std;

void b()
{
    /**
    +1. ������� ��� �����
    2. ��������� ������ ��������� ���������
    3. ��������� �������� ���������� �����
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
}

int main()
{
    b();
    return 0;
}
