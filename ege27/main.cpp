#include <iostream>
#include <vector>

using namespace std;

void kol_sum_ineff()
{
    /**
    + 1. ������� ��� �����
    + 2. ������� ��� ����
    3. ����� ��� ����, � ������� ������� �������� ����� 6
    4. ����� ��� ����, ����� ������� ������ 25, � ��������� �� ���-��
    5. ������� �������� ���-��
    */
    int n(0);
    cin >> n;
    int kol(0);
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int i(0); i<n-1; i++){
    for (int j(i+1); j<n; j++)
        cout << numbers[i] << " " << numbers[j] << endl;
    }
}

int main()
{
    kol_sum_ineff();
    return 0;
}
