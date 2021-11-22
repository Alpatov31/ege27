#include <iostream>
#include <vector>


using namespace std;

void max_sum_div()
{
    /**
    + 1. считать и сохранить все числа
    2. найти максимальное четное и максимальное нечетное число
    3. найти их сумму
    4. вывести наибольшую нечетную сумму
    */
    int n(0);
    int max_even(0);
    int max_odd(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
}

int main()
{
    max_sum_div();
    return 0;
}
