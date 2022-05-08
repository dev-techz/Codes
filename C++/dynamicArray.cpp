#include <iostream>

using namespace std;
int main()
{
    cout << "Enter Size Of Dynamic Array" << endl;
    int n;
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Value for " << i << " Element." << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    delete (arr);
}