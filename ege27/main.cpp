#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void kol_sum_eff()
{
    /**
    + 1. считать числа в вектор из шести элементов
    2. вывести все пары, которые можно создать из элементов вектора
    3. найти среди пар те, разность индексов которых меньше 6 и сумма кратна 25
    4. посчитать количество этих пар и вывести
    */
    int n(0);
    cin >> n;
    int kol(0);
    vector<int> numbers(6);
    for (int i(0); i < 6; i++)
        cin >> numbers[i];

}

int main()
{
    kol_sum_eff();
    return 0;
}
