#include <iostream>

using namespace std;

void fill_array(int *ptr, int n)
{
    cout << "Fill the Complete Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Fill " << i << "th index"
             << " -> ";
        cin >> ptr[i];
    }
    cout << endl;
}

void get_array(int *ptr, int n)
{
    int get;
    cout << "Enter the index no. to get value." << endl;
    cin >> get;
    if (get < n && get >= 0)
        cout << get << "th index is " << ptr[get];
    else
        cout << "index is out of range";
    cout << endl;
}

void set_array(int *ptr, int n)
{
    int set;
    cout << "Enter the index no. to edit value." << endl;
    cin >> set;
    if (set < n && set >= 0)
    {
        cout << "enter value" << endl;
        cin >> ptr[set];
        cout << set << "th index is now " << ptr[set] << endl;
    }
    else
        cout << "index is out of range";
    cout << endl;
}

void print_array(int *ptr, int n)
{
    cout << "Printing Array Elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << "th index"
             << " -> " << ptr[i] << endl;
    }
    cout << endl;
}

void search_array(int *ptr, int n)
{
    int no, state = 0;
    cout << "Enter Elements to Search In Array" << endl;
    cin >> no;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == no)
        {
            cout << "Element is present in " << i << "th index in array" << endl;
            state = 1;
            cout << endl;
            break;
        }
    }
    if (state == 0)
    {
        cout << "Element is Not Present in Array" << endl;
        cout << endl;
    }
}

int main()
{
    int *ptr;
    int arr_size, i;
    cout << "Enter Size For Create an Array." << endl;
    cin >> arr_size;
    ptr = new int[arr_size];
    fill_array(ptr, arr_size);

    while (i != 6)
    {
        cout << "Menu To Operate Array." << endl;
        cout << "1. Print Array." << endl;
        cout << "2. Search in Array." << endl;
        cout << "3. Get Element at index." << endl;
        cout << "4. Set Value at index." << endl;
        cout << "5. Refill the Array." << endl;
        cout << "6. Exit." << endl;

        cin >> i;

        switch (i)
        {
        case 1:
            print_array(ptr, arr_size);
            break;

        case 2:
            search_array(ptr, arr_size);
            break;

        case 3:
            get_array(ptr, arr_size);
            break;

        case 4:
            set_array(ptr, arr_size);
            break;

        case 5:
            fill_array(ptr, arr_size);
            break;

        case 6:
            delete (ptr);
            break;

        default:
            break;
        }
    }

    return 0;
}