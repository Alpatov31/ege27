#include <iostream>

using namespace std;

void number_sums_div_eff_2()
{
    /**
    + 1. считать и сохранить числа
    + 2. создать список с количествами остатков от деления на 40
    3. посчитать количество пар, в которых сумма остатков от деления на 40 кратна 40
    4. вывести ответ
    */
    int n(0);
    int k(0);
    int kol(0);
    vector<int> numbers;
    vector<int> qttys_by_mod_40(40, 0);
    while (n != -9999){
        cin >> n;
        numbers.push_back(n);
        k++;
    }
    for (int i(0); i<k-1; i++){
        qttys_by_mod_40[numbers[i]%40]++;}
    for (int i(0); i<qttys_by_mod_40[i]; i++)
        cout << i << ":" << qttys_by_mod_40[i] << endl;
    for (int i(0); i<qttys_by_mod_40.size(); i++){
        if (qttys_by_mod_40[i] > 0 and qttys_by_mod_40[40-i] > 0)
            kol += qttys_by_mod_40[i] * qttys_by_mod_40[40-i];}
    cout << kol << endl;

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
