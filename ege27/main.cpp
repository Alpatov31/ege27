#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance_EFF()
{
    /**
    + 1. ������� 4 ����� � �������
    + 2. ����� � ������ ������� - ������������� ������� �� ����������
    + 3. �������� ��� ����� � ������� ����� (0123 - 1234)
    + 4. ������� ����� ����� � ���� �������
    5. ������� ������� � ���������� ������� ��� ��������
    6. ������� ���� �� ����, ��� � ����� �������, � ����������� ��������
    7. ��� �������� �� ����������� ����
    8. ���� ��� ������� ��������, ���������
    */
    int n(0);
    cin >> n;
    int min_num(1000);
    int min_sum(0);
    vector<int> numbers(4);
    for (int i(0); i < 4; i++)
        cin >> numbers[i];
    if (numbers[0] < min_num)
        min_num = numbers[0];
    for (int i(0); i < 3; i++)
        numbers[i] = numbers[i+1];
    cin >> numbers[3];

}

int main()
{
    min_sum_distance_EFF();
    return 0;
}
