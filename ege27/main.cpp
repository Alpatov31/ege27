#include <iostream>
#include <vector>


using namespace std;

void number_sums_div_eff_2()
{
    /**
    + 1. считать и сохранить числа
    2. создать список с количествами остатков от деления на 40
    3. посчитать количество пар, в которых сумма остатков от деления на 40 кратна 40
    4. вывести ответ
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    vector<int> qttys_by_mod_40(40, 0);
    for (int i(0); i<n; i++){
        cin >> numbers[i];
        qttys_by_mod_40[numbers[i]%40]++;}
    for (int i(0); i<qttys_by_mod_40.size(); i++){
        cout << i << ":" << qttys_by_mod_40[i] << endl;
        }

}

int main()
{
    number_sums_div_eff_2();
    return 0;
}
