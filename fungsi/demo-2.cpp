#include <iostream>

using namespace std;

int hitungSubtotal(int harga,int qty){
    int subtotal = harga * qty;
    return subtotal;
}

int hitungPotonganHarga(int subtotal){
    if (subtotal > 10000 && subtotal < 50000)
    {
        return 1000;
    }else if (subtotal > 50000)
    {
        return 20000;
    }else{
        return 0;
    }
}

int hitungPotonganByMember(string member_tipe){
    if (member_tipe == "PLATINUM")
    {
        return 30000;
    }
    else if (member_tipe == "REGULER")
    {
        return 15000;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int harga,qty,subtotal,potongan,grand_total,potongan_member;
    string member_tipe;

    cout << "masukan harga barang :";
    cin >> harga;
    cout << "masukan qty barang :";
    cin >> qty;
    cout << "Tipe Member :";
    cin >> member_tipe;
    subtotal = hitungSubtotal(harga,qty); // 
    potongan = hitungPotonganHarga(subtotal); 
    grand_total = subtotal - potongan;
    potongan_member = hitungPotonganByMember(member_tipe);
    grand_total = grand_total - potongan_member;

    cout << "Subtotal Barang adalah (Rp.): " << subtotal << "\r\n";
    cout << "Potongan yang ada dapat (Rp.): " << potongan << "\r\n";
    cout << "Potongan Member (Rp.): " << potongan_member << "\r\n";
    cout << "Total yang harus dibayar (Rp.): " << grand_total << "\r\n";
}
