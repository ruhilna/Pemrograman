#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

using namespace std;

int i;
class Buku
{
    public:
        int id_buku;
        string judul;
    public:
        virtual void setId(int id)
        {
            id_buku=id;
        }
        virtual void setJudul(string jd)
        {
            judul = jd;
        }

};

class DataBuku : public Buku
{
    public:
        virtual void getInfo(int id, string jd)
        {
            cout << "ID Buku    : " << id_buku << endl;
            cout << "Judul Buku : " << judul << endl;
        }
};

int main()
{
    DataBuku Buku;
    int pil, id;
    string jd;

    do
    {
        cout << "APLIKASI PERPUSTAKAAN BERBASIS OOP" << endl;
        cout << "========================================" << endl;
        cout << "1. Input Data Buku" << endl;
        cout << "2. Tampil Data Buku" << endl;
        cout << "3. Keluar" << endl;
        cout << "========================================" << endl;
        cout << "Pilih menu : "; cin >> pil;
        switch(pil)
        {
            case 1:
                    system("cls");
                    cout << "Masukkan ID Buku : "; cin >> id;
                    Buku.setId(id);
                    cout << "Masukkan Judul Buku : "; cin >> jd;
                    Buku.setJudul(jd);
                    getch();
                    system("cls");
                    break;
            case 2:
                    Buku.getInfo(id, jd);
                    getch();
                    system("cls");
                    break;
            case 3:
                    cout << "Terima Kasih..." << endl;
                    system("cls");
                    break;
            default:
                    cout << "Maaf pilihan tidak terdapat pada menu" << endl;
                    system("cls");
                    break;
        }
    } while (pil!=4);

    return 0;
}
