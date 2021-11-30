#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance()
{
    /**
    + 1. ������� �����
    + 2. ������� ����
    + 3. ������� ���� � ����������� �����������
    + 4. ������ ������ ���� ��������� �����
    + 5. ����� ������� ����� ����
    */
    int n(0);
    int min_sum(2001);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int i(0); i<n-1; i++)
        for (int j(i+4); j < n; j++)
            if ((numbers[i] + numbers[j]) < min_sum)
                min_sum = numbers[i] + numbers[j];
            cout << min_sum << endl;
}

int main()
{
    min_sum_distance();
    return 0;
}
