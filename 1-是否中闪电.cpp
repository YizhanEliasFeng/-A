#include <iostream>
#include <string>
using namespace std;

int main()
{
    string suit;
    int num = 0;
    cin >> suit >> num;
    if (suit == "heitao" && num >= 2 && num <= 9)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}