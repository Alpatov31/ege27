#include <iostream>
#include <vector>

using namespace std;

void min_sum_distance_EFF()
{
    /**
    + 1. считать 4 числа в червяка
    + 2. число в хвосте червяка - потенциальный минимум из пройденных
    + 3. сдвинуть все числа в червяке влево (0123 - 1234)
    + 4. считать пятое число в зубы червяку
    5. ВЫВЕСТИ ЧЕРВЯКА И ПРОЙДЕННЫЙ МИНИМУМ ДЛЯ ПРОВЕРКИ
    6. собрать пару из того, что в зубах червяка, и пройденного минимума
    7. это кандидат на минимальную пару
    8. один ход червяка закончен, повторяем
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
