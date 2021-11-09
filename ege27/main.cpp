#include <iostream>

using namespace std;

void number_of_products_div() /// number of products dividable by smth
{
    /**
    1. ������� �����
    2. �������� ��� � ������ �� ��������� ��������������� ������ ���������������:
        ������� �� 55, ������� �� 5 �� �� 11, ������� �� 11 � �� 5, �� ������� �� �� 5 �� �� 11
    3. ����� n55*n11 + n55*n5 + n5*no + n5*n11
    */
    int n(0), cur(0);
    long n15(0), n3(0), n5(0), no(0);
    cin >> n;
    for (int i(0); i<n; i++)
    {
        cin >> cur;
        if (cur%15 == 0) n15++;
        else if (cur%3==0) n3++;
        else if (cur%5==0) n5++;
    }
    no = n - n15 - n5 - n3;
    cout << n15*n3 + n15*n5 + n15 * no + n15 * (n15-1)/2 + n5*n3 << endl;
}


int main()
{
    number_of_products_div();
    return 0;
}
