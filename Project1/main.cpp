#include <iostream>
#include <windows.h>
#include <time.h>
#include <vector>

using namespace std;

int get_sum(vector <int> arr)
{
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    srand(time(NULL));

    int len;

    cout << "Enter length: ";
    cin >> len;

    vector <int> array;

    cout << "Your array: " << endl;

    for (int i = 0; i < len; i++) {
        array.push_back(rand() % 21 - 10);
        cout << array[i] << " ";
    }

    cout << endl << "Sum -element: " << get_sum(array);
}