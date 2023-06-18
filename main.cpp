// PROGRAM MENGURUTKAN ARRAY DARI HURUF PERTAMA DATA
#include <iostream>

using namespace std;

// Function pembantu
void sorting(string arr[], int n) {
    n -= 1;
    // Mengambil semua data array
    for (int i = 0; i < n; i++) {
        // Membanding data sekarang [i] dengan data sebelumnya [<i]
        for (int j = 0; j < n - i; j++) {
            // Jika huruf pertama data sekarang [j] lebih besar dari huruf pertama data setelahnya [j+1] == True
            if (arr[j][0] > arr[j + 1][0]) {
                // Maka,
                string temp = arr[j];   // Data sekarang [j] akan dimasukkan ke dalam data temp
                arr[j] = arr[j + 1];    // Data setelah data sekarang [j+1] akan dimasukkan ke dalam data sekarang [j]
                arr[j + 1] = temp;      // Data temp akan dimasukkan ke dalam data setelah data sekarang [j+1]
            }
        }
    }
}

int main() {
    const int size = 7;
    string data[size] = {
        "Jakarta", 
        "Malang", 
        "Surabaya", 
        "Bandung", 
        "Garut", 
        "Depok", 
        "Tangerang"
    };

    cout << "Data sebelum diurutkan: " << endl;
    for (int i = 0; i < size; i++) {
        cout << i+1 << ". " << data[i] << endl;
    }

    sorting(data, size);

    cout << "\nData setelah diurutkan berdasarkan huruf awal: " << endl;
    for (int i = 0; i < size; i++) {
        cout << i+1 << ". "  << data[i] << endl;
    }

    return 0;
}