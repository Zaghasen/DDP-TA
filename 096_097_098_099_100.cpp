#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

int pilihan;
char ulang;
int jumlahKomponen;
//string jumlahMahasiswaStr,stoi;

struct NamaKomponen{
	int No;
	string NamaKom;
	double nilai;
};

struct Mhs {
      int NIM;
      string Nama,MTKul;
      NamaKomponen BanyakKomponen[100];
      };
        
struct NilaiMahasiswa{
    int nilai;
};

struct Mahasiswa{
    string nama, kelas;
    int nim;
    NilaiMahasiswa nilaimhs;
};

int jumlahMahasiswa;
void Tugas1();
void Tugas2();

int main(){
do { 
	system("cls");
    cout << setfill('=') << setw(30) << "=" << endl;
    cout<<"Pilih Menu Yang diinginkan"<<endl;
    cout << setfill('=') << setw(30) << "=" << endl;
    cout<<"1.Tugas 1"<<endl;
    cout<<"2.Tugas 2"<<endl;
    cout<<"3.About us"<<endl;
    cout<<"4.Exit";
    cout << endl;
    cout<<"\nPilihan : ";cin>>pilihan;
    cout << setfill('=') << setw(30) << "=" << endl;

        switch(pilihan) {
    case 1: 
        system("cls");
			 Tugas1();
		cout << "\nTekan Enter Untuk Kembali Ke Menu...";
			getch();
	    break;
	case 2:
        system("cls");
		    Tugas2();
		cout << "\nTekan Enter Untuk Kembali Ke Menu...";
			getch();
		 break;
	case 3: 
        system("cls");
    cout << "Nama Anggota\n";
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << "1. Gabriel Egi Putra Setiawan -124230096"<<
        "\n2. Zalfa Ghalib Hussein       -124230097"<<
        "\n3. Miftah Rafli Nuryatama     -124230098"<<
        "\n4. Anggela Purnama Hardi      -124230099"<<
        "\n5. Muhammad Aditya Rahman     -124230100"<<endl;
        cout << "\nTekan Enter Untuk Kembali Ke Menu...";
        getch();
        break;
        
    case 4: exit(0);
         break; 
	default :
	{ 
		cout<<"pilihan salah"<<endl;
	}
}	

} while(true); return 0;
}

void Tugas1(){

    // Penginputan data mahasiswa
     cout << setfill('=') << setw(70) << "=" << endl;
    cout << "Silahkan Input Data" << endl;
    cout << setfill('=') << setw(70) << "=" << endl;

    // Input jumlah mahasiswa yang akan diinput
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << endl;

    // Deklarasi array mahasiswa sesuai dengan jumlah yang diinput
    Mahasiswa mhs[jumlahMahasiswa];

    
    for (int i = 0; i < jumlahMahasiswa; i++) {
		// Menggunakan getline untuk input nama
        cout << "Nama mahasiswa ke-" << i + 1 << "   : ";
        cin.ignore(); getline(cin,mhs[i].nama);
        cout << "Nim mahasiswa ke-" << i + 1 << "    : ";
        cin >> mhs[i].nim;
        cout << "Kelas mahasiswa ke-" << i + 1 << "  : ";
        cin.ignore(); getline(cin,mhs[i].kelas);
        cout << "Nilai mahasiswa ke-" << i + 1 << "  : ";
        cin >> mhs[i].nilaimhs.nilai;
    }

    // Output data mahasiswa
    cout << setw(70) << setfill('=') << "" << endl;
    cout << left << setfill('-') << setw(70) << "-" << endl;
    cout << left << setfill(' ') << setw(10) << "Nama"
         << "\t | "
         << left << setfill(' ') << setw(11) << "Nim"
         << " | "
         << left << setfill(' ') << setw(8) << "Kelas"
         << " | "
         << left << setfill(' ') << setw(10) << "Nilai Angka"
         << " | "
         << left << setfill(' ') << setw(23) << "Nilai Huruf" << endl;
    cout << left << setfill('-') << setw(70) << "-" << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        // Proses pengklasifikasian nilai huruf
        char nilaiHuruf;
        if (mhs[i].nilaimhs.nilai >= 91 && mhs[i].nilaimhs.nilai <= 100) {
            nilaiHuruf = 'A';
        } else if (mhs[i].nilaimhs.nilai >= 81 && mhs[i].nilaimhs.nilai <= 90) {
            nilaiHuruf = 'B';
        } else if (mhs[i].nilaimhs.nilai >= 71 && mhs[i].nilaimhs.nilai <= 80) {
            nilaiHuruf = 'C';
        } else if (mhs[i].nilaimhs.nilai >= 61 && mhs[i].nilaimhs.nilai <= 70) {
            nilaiHuruf = 'D';
        } else if (mhs[i].nilaimhs.nilai >= 0 && mhs[i].nilaimhs.nilai <= 60) {
            nilaiHuruf = 'E';
        } else {
            cout << "Nilai tidak valid. Masukkan nilai antara 0 dan 100." << endl;
           // Keluar dari program dengan kode error
        }

        // Output data mahasiswa dengan nilai huruf
        cout << left << setfill(' ') << setw(10) << mhs[i].nama << "\t | "
             << left << setfill(' ') << setw(11) << mhs[i].nim << " | "
             << left << setfill(' ') << setw(8) << mhs[i].kelas << " | "
             << left << setfill(' ') << setw(11) << mhs[i].nilaimhs.nilai << " | "
             << left << setfill(' ') << setw(24) << nilaiHuruf << endl;
    }
    cout << left << setfill('-') << setw(70) << "-" << endl;
}

void Tugas2()
{
	 
	int jumlahMahasiswa;

    cout << "Silahkan Input Data" << endl;
    cout << setfill('=') << setw(50) << "=" << endl;
	cout << "Banyaknya Mahasiswa: ";
    cin >> jumlahMahasiswa;	
	 Mhs daftarMahasiswa[jumlahMahasiswa];
	 for (int i = 0; i < jumlahMahasiswa; ++i) {
        // Input data mahasiswa
        cout << "\nMasukkan NIM Mahasiswa " << i + 1 << ": ";
        cin >> daftarMahasiswa[i].NIM;
        cout << "Masukkan Nama Mahasiswa " << i +1 << ": ";
        cin.ignore(); getline(cin, daftarMahasiswa[i].Nama);
        cout << "Masukkan Mata Kuliah " << i +1 << ": ";
        getline(cin, daftarMahasiswa[i].MTKul);
        cout << "Masukkan Banyak Komponen untuk Mahasiswa " << i + 1 << ": ";
        cin >> jumlahKomponen;
        
	for (int i = 0; i < jumlahKomponen; i++) {
            
            cout << "Masukkan Nomor Komponen " << i + 1 << ": ";
            cin >> daftarMahasiswa[i].BanyakKomponen[i].No;

            cout << "Masukkan Nama Komponen " << i + 1 << ": ";
            cin.ignore();
            getline(cin, daftarMahasiswa[i].BanyakKomponen[i].NamaKom);

            cout << "Masukkan Skor Komponen " << i + 1 << ": ";
            cin >> daftarMahasiswa[i].BanyakKomponen[i].nilai;
        }
	}
		cout << endl;
        cout << setfill('=') << setw(50) << "=" << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa " << i + 1 << ":\n";
        cout << setfill('=') << setw(50) << "=" << endl;
        cout << "Nomor Mahasiswa: " << daftarMahasiswa[i].NIM << endl;
        cout << "Nama Mahasiswa: " << daftarMahasiswa[i].Nama << endl;
        cout << "Mata Kuliah: " << daftarMahasiswa[i].MTKul << endl;
        cout << endl;
        for (int i = 0; i < jumlahKomponen ; ++i) {
            if (daftarMahasiswa[i].BanyakKomponen[i].No == 0 ){
                break; // Hentikan loop jika no komponen adalah 0 (tandanya tidak ada data lagi)
            }
            cout <<"   No   Nama Komponen     Nilai"<<endl;
            cout << "   "<<daftarMahasiswa[i].BanyakKomponen[i].No<<"    ";
            cout << daftarMahasiswa[i].BanyakKomponen[i].NamaKom <<"\t        ";
            cout <<"   "<<daftarMahasiswa[i].BanyakKomponen[i].nilai << endl;
         }
            cout << setfill('=') << setw(50) << "=" << endl;
    }
}
