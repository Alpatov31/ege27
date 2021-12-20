#include <iostream>
#include <vector>


using namespace std;

void max_sum_div()
{
    /**
    + 1. считать и сохранить все числа
    + 2. найти максимальное четное и максимальное нечетное число
    + 3. найти их сумму
    + 4. вывести наибольшую нечетную сумму
    */
    int n(0);
    int max_even(0);
    int max_odd(0);
    int kol_odd(0);
    int kol_even(0);
    int max_sum;
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];
    for (int i(0); i<n; i++)
        if (numbers[i] % 2 != 0 and numbers[i] > max_odd){
            max_odd = numbers[i];
            kol_odd++;
        }
        else if (numbers[i] % 2 == 0 and numbers[i] > max_even)
            max_even = numbers[i];
            kol_even++;
    max_sum = max_odd + max_even;
    if (kol_even > 0 and kol_odd > 0) {

        cout << max_sum << endl;
    }
    else if (kol_even == 0 or kol_odd == 0)
        cout << -1 << endl;
}

int main()
{
    max_sum_div();
    return 0;
}
