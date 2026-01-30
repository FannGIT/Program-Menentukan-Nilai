<div align="center">

# 🎓 Program Penentuan Nilai Mahasiswa  
### Menggunakan Array 2 Dimensi – C++

<img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge">
<img src="https://img.shields.io/badge/Type-Console%20App-green?style=for-the-badge">
<img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge">

</div>

---

## 📌 Tentang Program
Program ini dibuat untuk mengelola **data nilai mahasiswa** menggunakan **array 2 dimensi**.  
Data yang dimasukkan akan diproses untuk menentukan **grade otomatis** dan ditampilkan dalam bentuk **tabel rapi di console**.

Project ini cocok untuk latihan:
- Array 2 dimensi
- Function
- Validasi input
- Formatting output

---

## 🛠️ Teknologi yang Digunakan
| Teknologi | Keterangan |
|---------|-----------|
| Bahasa | C++ |
| Library | iostream, iomanip, limits |
| Tipe Program | Console Application |

---

## ✨ Fitur Program
- ✔️ Input jumlah mahasiswa (maksimal 20)
- ✔️ Validasi input (bukan huruf, tidak negatif, ada batas nilai)
- ✔️ Penentuan grade otomatis (A–E)
- ✔️ Penyimpanan data menggunakan array 2 dimensi
- ✔️ Tampilan tabel rapi menggunakan `iomanip`

---

## 🧠 Aturan Penilaian
| Nilai | Grade |
|------|-------|
| ≥ 85 | A |
| ≥ 70 | B |
| ≥ 55 | C |
| ≥ 40 | D |
| < 40 | E |

---

## 📂 Struktur Data Array
```

data[baris][kolom]

kolom:
[0] Nama
[1] Nilai
[2] Grade

````

---

## ⚙️ Cara Menjalankan Program

### 1️⃣ Compile Program
```bash
g++ main.cpp -o nilai_mahasiswa
````

### 2️⃣ Jalankan Program

```bash
./nilai_mahasiswa
```

---

## 📄 Contoh Output

```text
=== Program Nilai Mahasiswa ===

Masukkan jumlah mahasiswa (max. 20): 2

Mahasiswa ke-1
Nama  : Andi
Nilai (0 - 100): 85

Mahasiswa ke-2
Nama  : Budi
Nilai (0 - 100): 72

=====================================================
No   Nama                     Nilai   Grade
-----------------------------------------------------
1    Andi                     85      A
2    Budi                     72      B
=====================================================
```

---

## 🧩 Alur Program Singkat

1. User memasukkan jumlah mahasiswa
2. Program meminta nama dan nilai setiap mahasiswa
3. Nilai diproses untuk menentukan grade
4. Semua data disimpan dalam array
5. Hasil ditampilkan dalam bentuk tabel

---

## 👤 Author

**Fannn**
Mahasiswa | C++ & Algoritma Dasar

---

## 🚀 Pengembangan Selanjutnya

* 🔹 Sorting nilai
* 🔹 Menghitung rata-rata nilai
* 🔹 Menyimpan data ke file
* 🔹 Menambahkan menu interaktif

---

⭐ Jika repo ini bermanfaat, jangan lupa beri **star**!
