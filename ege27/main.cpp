#include <iostream>
#include <vector>

using namespace std;

void kol_sum_ineff()
{
    /**
    + 1. считать все числа
    2. вывести все пары
    3. найти все пары, у которых разница инедксов равна 6
    4. найти все пары, сумма которых кратна 25, и посчитать их кол-во
    5. вывести итоговое кол-во
    */
    int n(0);
    cin >> n;
    int kol(0);
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
}

int main()
{
    kol_sum_ineff();
    return 0;
}
