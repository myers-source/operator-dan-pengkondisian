#include <iostream>
using namespace std;

int main ()
{
    int nilai = 95;
    if (nilai >= 90)
    {
        cout << "kamu dapat A" << endl;
    }
    else if (nilai >= 80)
    {
        cout << "kamu dapat B" << endl;
    }
    else if (nilai >= 70)
    {
        cout << "kamu dapat C" << endl;
    }
    else
    {
        cout << "kamu dapat D" << endl;
    }
    
    return 0;
}
