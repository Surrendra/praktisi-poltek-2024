#include <iostream>
using namespace std;

const int ROWS = 2;
const int COLS = 3;

void tambahMatrix(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int hasil[ROWS][COLS])
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void tampilkanMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[ROWS][COLS] = {{7, 8, 9}, {10, 11, 12}};
    int hasil[ROWS][COLS];

    // Menjumlahkan kedua matrix
    tambahMatrix(matrix1, matrix2, hasil);

    // Menampilkan matrix pertama
    cout << "Matrix Pertama:\n";
    tampilkanMatrix(matrix1);

    cout << endl;

    // Menampilkan matrix kedua
    cout << "Matrix Kedua:\n";
    tampilkanMatrix(matrix2);

    cout << endl;

    // Menampilkan hasil penjumlahan matrix
    cout << "Hasil Penjumlahan Matrix:\n";
    tampilkanMatrix(hasil);

    return 0;
}