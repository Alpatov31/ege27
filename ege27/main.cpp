#include <iostream>
#include <vector>


using namespace std;

long double fact(int N)
{
    if(N < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (N == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля - не удивляетесь, но это 1 =)
    else // Во всех остальных случаях
        return N * fact(N - 1); // делаем рекурсию.
}

void b()
{
    /**
    +1. считать все числа
    2. заполнить вектор остатками элементов
    3. посчитать итоговое количество троек
    */
    int n(0);
    int k(0);
    cin >> n;
    vector<int> numbers(n);
    vector<int> ostatok(4);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        ostatok[numbers[i]%4] += 1;
    k += fact(ostatok[0])/(fact(3) * fact(ostatok[0]-3));
    k += fact(ostatok[0] * ostatok[2])/(fact(3) * fact(ostatok[0] * ostatok[2] - 3));
    k += fact(ostatok[1] * ostatok[3] * ostatok[0])/(fact(3) * fact(ostatok[0] * ostatok[3] * ostatok[1] - 3));
    k += fact(ostatok[1] * ostatok[2])/(fact(3) * fact(ostatok[1] * ostatok[2] - 3));
    k += fact(ostatok[3] * ostatok[2])/(fact(3) * fact(ostatok[3] * ostatok[2] - 3));
    cout << k;

}

int main()
{
    b();
    return 0;
}
