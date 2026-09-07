#include <iostream>
using namespace std;

int main ()
{
    int harga_buku=15000;
      int pulpen=3750;
      int tas=120000;
    int total_setelah_diskon = ((harga_buku*3)+(pulpen*2)+tas)*0.9;

    {
        cout << "total harga:" << endl;
        cout << (harga_buku*3)+(pulpen*2)+tas << " Rupiah" << endl;
    }
{
    cout << "---------------------" << endl;
}
    {
        cout << "Harga setelah dikson 10%" << endl;
        cout << total_setelah_diskon << endl;
    }
    return 0;
}
