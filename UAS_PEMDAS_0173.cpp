#include <iostream>
using namespace std;

// Kelas dasar MasukUniversitas
class MasukUniversitas {
protected:
    double uangPendaftaran;
    double uangSemesterPertama;
    double uangBangunan;
    double totalBiaya;

public:
    // Getter dan setter untuk atribut uangPendaftaran
    double getUangPendaftaran() const {
        return uangPendaftaran;
    }

    void setUangPendaftaran(double uangPendaftaran) {
        this->uangPendaftaran = uangPendaftaran;
    }

    // Getter dan setter untuk atribut uangSemesterPertama
    double getUangSemesterPertama() const {
        return uangSemesterPertama;
    }

    void setUangSemesterPertama(double uangSemesterPertama) {
        this->uangSemesterPertama = uangSemesterPertama;
    }

    // Getter dan setter untuk atribut uangBangunan
    double getUangBangunan() const {
        return uangBangunan;
    }

    void setUangBangunan(double uangBangunan) {
        this->uangBangunan = uangBangunan;
    }

    // Getter untuk atribut totalBiaya
    double getTotalBiaya() const {
        return totalBiaya;
    }

    // Metode virtual untuk menghitung total biaya
    virtual void hitungTotalBiaya() = 0;

    // Metode virtual untuk menampilkan total biaya
    virtual void tampilkanTotalBiaya() = 0;

    // Metode virtual untuk input data
    virtual void input() = 0;
};

// Kelas turunan SNBT
class SNBT : public MasukUniversitas {
public:
    // Metode input untuk SNBT
    void input() override {
        cout << "Masukkan data SNBT:" << endl;
        cout << "Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
        cout << "Uang Bangunan: ";
        cin >> uangBangunan;
    }

    // Metode hitungTotalBiaya untuk SNBT
    void hitungTotalBiaya() override {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    // Metode tampilkanTotalBiaya untuk SNBT
    void tampilkanTotalBiaya() override {
        cout << "Total Biaya SNBT: " << totalBiaya << endl;
        if (totalBiaya > 10000000) {
            cout << "Rekomendasi: Mahal" << endl;
        }
        else if (totalBiaya > 5000000) {
            cout << "Rekomendasi: Sedang" << endl;
        }
        else {
            cout << "Rekomendasi: Murah" << endl;
        }
    }
};

// Kelas turunan SNBP
class SNBP : public MasukUniversitas {
public:
    // Metode input untuk SNBP
    void input() override {
        cout << "Masukkan data SNBP:" << endl;
        cout << "Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
    }

    // Metode hitungTotalBiaya untuk SNBP
    void hitungTotalBiaya() override {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    // Metode tampilkanTotalBiaya untuk SNBP
    void tampilkanTotalBiaya() override {
        cout << "Total Biaya SNBP: " << totalBiaya << endl;
        if (totalBiaya > 10000000) {
            cout << "Rekomendasi: Mahal" << endl;
        }
        else if (totalBiaya > 5000000) {
            cout << "Rekomendasi: Sedang" << endl;
        }
        else {
            cout << "Rekomendasi: Murah" << endl;
        }
    }
};

int main() {
    int pilihan;

    cout << "Pilih jalur masuk:" << endl;
    cout << "1. SNBT" << endl;
    cout << "2. SNBP" << endl;
    cout << "Pilihan: ";
    cin  >> pilihan;
}