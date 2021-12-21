#include <iostream>
#include <vector>


using namespace std;

void a()
{

    /**
    1. считать все числа
    2. вывести все тройки
    3. посчитать сумму троек и проверить на кратность 4
    4. посчитать количество
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        for (int j(i+1); j < n; j++)
            for (int z(j+1); z < n; z++)
                cout << numbers[i] << " " << numbers[j] << " " << numbers[z] << endl;


}

int main()
{
    a();
    return 0;
}
