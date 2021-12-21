#include <iostream>
#include <vector>

using namespace std;

void b()
{
    /**
    +1. считать все числа
    2. заполнить вектор остатками элементов
    3. посчитать итоговое количество троек
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    vector<int> ostatok(4);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        ostatok[numbers[i]%4] += 1;

}

int main()
{
    b();
    return 0;
}
