#include <iostream>

using namespace std;

int main()
{
   int kode, porsi, jml, tot, byr, kembali;

   cout << "          Pondok Dahar Smecone Jos        " << endl;
   cout << "              FILL UP UR TANK            " << endl;
   cout << "           Chef et Mati Karna Mu         " << endl;
   cout << "          Jl. ni Saja Apa Yang Ada        " << endl;
   cout << "============================================" << endl;
   cout << "" << endl;
   cout << " ___________________________________________ " << endl;
   cout << "|      Menu Makanan     |       Harga       |" << endl;
   cout << "|                       |                   |" << endl;
   cout << "|    1. Ayam Goreng     |   Rp. 10.000      |" << endl;
   cout << "|    2. Nasi Goreng     |   Rp. 12.000      |" << endl;
   cout << "|    3. Nasi Kuning     |   Rp. 10.000      |" << endl;
   cout << "|    4. Pecel Ayam+Nasi |   Rp. 15.000      |" << endl;
   cout << "|    5. Nasi Rames      |   Rp. 8.000       |" << endl;
   cout << "|    6. Jus Jeruk       |   Rp. 5.000       |" << endl;
   cout << "|    7. Es Teh          |   Rp. 2.000       |" << endl;
   cout << "|_______________________|___________________|" << endl;
   cout << "" << endl;
   cout << "Masukkan Pilihan Anda : ";
   cin >> kode;
   switch (kode)
   {
   case 1 :
    cout <<'\n'<<"Ayam Goreng\n" << endl;
    porsi = 10000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 2 :
    cout <<'\n'<<"Nasi Goreng\n" << endl;
    porsi = 12000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 3 :
    cout <<'\n'<<"Nasi Kuning\n" << endl;
    porsi = 10000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 4 :
    cout <<'\n'<<"Pecel Ayam + Nasi\n" << endl;
    porsi = 15000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 5 :
    cout <<'\n'<<"Nasi Rames\n" << endl;
    porsi = 8000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 6 :
    cout <<'\n'<<"Jus Jeruk\n" << endl;
    porsi = 5000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    case 7 :
    cout <<'\n'<<"Es Teh\n" << endl;
    porsi = 2000;
    cout << "Masukkan Jumlah Porsi : ";
    cin >> jml;
    tot = porsi * jml;
    cout << "Total Harganya        : Rp. " << tot << endl;
    cout << "Dibayar               : Rp. ";
    cin >> byr;
    kembali = byr - tot;
    cout << "Kembali               : Rp. " << kembali << endl;
    cout << "" << endl;
    break;

    default :
        cout << "Kode Yang Anda Masukkan Tidak Tersedia" << endl;
   }
   cout << "Terima Kasih Atas Kunjungan Anda Di Pondok Smecone Jos" << endl;

    return 0;
}
