#include <iostream>
#include <vector>


using namespace std;

void a()
{

    /**
    +1. ������� ��� �����
    +2. ������� ��� ������
    +3. ��������� ����� ����� � ��������� �� ��������� 4
    4. ��������� ����������
    */
    int n(0);
    int k(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        for (int j(i+1); j < n; j++)
            for (int z(j+1); z < n; z++)
                if ((numbers[i] + numbers[j] + numbers[z]) % 4 == 0)
                    k++;
        cout << k << endl;
}

int main()
{
    a();
    return 0;
}
