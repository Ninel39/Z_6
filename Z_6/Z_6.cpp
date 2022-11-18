// Z_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    const int size = 5;
    int firstarray[size][size * 2];
    int secondarray[size][size];


    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size * 2; j++)
        {
            firstarray[i][j] = 0 + rand() % 50;
            cout << firstarray[i][j] << "\t";
            if (j & 1)
                secondarray[i][j / 2] = firstarray[i][j - 1] + firstarray[i][j];
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << secondarray[i][j] << "\t";
        cout << endl;
    }
}


