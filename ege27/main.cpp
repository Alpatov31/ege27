#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void kol_sum_eff()
{
    /**
    + 1. считать числа в вектор из шести элементов
    + 2. вывести все пары, которые можно создать из элементов вектора
    + 3. найти среди пар те, сумма которых кратна 25
    + 4. посчитать количество этих пар
    + 5. сдвинуть числа влево
    7. зациклить
    6. вывести итоговое количество
    */
    int n(0);
    cin >> n;
    int kol(0);
    vector<int> numbers(6);
    for (int i(0); i < 6; i++)
        cin >> numbers[i];
    for (int i(0); i < 6; i++){
        for (int j(i+1); j < 6; j++)
            if ((numbers[i] + numbers[j]) % 25 == 0)
                kol++;
    }
    for (int i(0); i < 5; i++)
        numbers[i] = numbers[i+1];
    cin >> numbers[5];
}

int main()
{
    kol_sum_eff();
    return 0;
}
