// --- Library
#include <iostream>
#include <iomanip>
#include <limits> 
using namespace std;

// --- [Function] Menentukan Nilai
char tentukanGrade(int nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 55) return 'C';
    else if (nilai >= 40) return 'D';
    return 'E';
}

// --- [Function] Validasi Angka
int inputAngka(const string &pesan, int batasMax) {
    int angka;

    while (true) {
        cout << pesan;
        cin >> angka;

        if (cin.fail()) {
            cout << "Input harus berupa angka! Coba lagi.\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (angka < 0) {
            cout << "Nilai tidak boleh negatif! Coba lagi.\n";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (angka > batasMax) {
            cout << "Nilai tidak boleh lebih dari " << batasMax << "! Coba lagi.\n";
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        return angka;
    }
}

// --- [Function] Utama
int main() {
    cout << "=== Program Nilai Mahasiswa ===\n\n";
    int n = inputAngka("Masukkan jumlah mahasiswa (max. 20): ", 20);

    
    string data[20][3];  // 

    for (int i = 0; i < n; ++i) {
        cout << "\nMahasiswa ke-" << i + 1 << "\n";
        cout << "Nama  : ";
        getline(cin, data[i][0]);
        
        // jika menekan enter tanpa isi, ulang input
        if (data[i][0].empty()) {
            cout << "Nama tidak boleh kosong. Masukkan nama ulang.\n";
            --i; // ulangi indeks yang sama
            continue;
        }

        int nilai = inputAngka("Nilai (0 - 100): ", 100);
        data[i][1] = to_string(nilai);

        // simpan nilai sebagai string (1 char)
        char g = tentukanGrade(nilai);
        data[i][2] = string(1, g);
    }

    // Mencetak Tabel
    cout << "\n=====================================================\n";
    cout << left << setw(5)  << "No"
                 << setw(25) << "Nama"
                 << setw(8)  << "Nilai"
                 << setw(8)  << "Grade" << "\n";
    cout << "-----------------------------------------------------\n";

	// Mencetak Data Nilai
    for (int i = 0; i < n; ++i) {
        cout << left << setw(5)  << (i + 1)
                     << setw(25) << data[i][0]
                     << setw(8)  << data[i][1]
                     << setw(8)  << data[i][2] << "\n";
    }
    cout << "=====================================================\n";

    return 0;
}
