#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
#include "include/matkul.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;
	vector<matakuliah> recMtk;

	int menu_terpilih;

	while(1) {
		string username;
		string password;
		cout << "LOGIN\n";
		cout << "Username : " ; 
		cin >> username;
		cout << "Password : " ; 
		cin >> password;
		if(username == "admin"){
			if(password == "password")
			{
				cout << "Selamat datang di Departemen Teknik Komputer" << endl << endl;

		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Pendidik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan\n" << endl;
		cout << "  7. Tampilkan Matakuliah" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) 
		{
			case 1:
				{
					string id, nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk, semesterke;
					cout << "Masukkan id 			: ";
					cin >> id;
					cout << "Masukkan nama 			: ";
					cin >> nama;
					cout << "Masukkan nrp 			: ";
					cin >> nrp;
					cout << "Masukkan departemen	: ";
					cin >> departemen;
					cout << "Masukkan hari			: ";
					cin >> dd;
					cout << "Masukkan bulan 		: ";
					cin >> mm;
					cout << "Masukkan tahun 		: ";
					cin >> yy;
					cout << "Masukkan tahun masuk 	: ";
					cin >> tahunmasuk;
					cout << "Masuk Semester ke 	    : ";
					cin >> semesterke;
					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					string id, nama, npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan id 			: ";
					cin >> id;
					cout << "Masukkan nama 			: ";
					cin >> nama;
					cout << "Masukkan npp 			: ";
					cin >> npp;
					cout << "Masukkan departemen	: ";
					cin >> departemen;
					cout << "Masukkan hari 			: ";
					cin >> dd;
					cout << "Masukkan bulan 		: ";
					cin >> mm;
					cout << "Masukkan tahun 		: ";
					cin >> yy;
					cout << "Masukkan tahun masuk 	: ";
					cin >> pendidikan;	
					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, unit, npp;
					int dd, mm, yy;
					cout << "Masukkan id 	: ";
					cin >> id;
					cout << "Masukkan nama 	: ";
					cin >> nama;
					cout << "Masukkan npp	: ";
					cin >> npp;
					cout << "Masukkan hari 	: ";
					cin >> dd;
					cout << "Masukkan bulan : ";
					cin >> mm;
					cout << "Masukkan tahun : ";
					cin >> yy;
					cout << "Masukkan unit 	: ";
					cin >> unit;
					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (size_t i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama 			: " << recMhs[i].getNama() << endl;
						cout << "NRP 			: " << recMhs[i].getNRP() << endl;
						cout << "Id				: " << recMhs[i].getId() << endl;
						cout << "Departemen 	: " << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk	: " << recMhs[i].getTahunmasuk() << endl;
						cout << "Semester ke    : " << recMhs[i].getSemester() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
				break;
			case 5:
				{
					for (size_t i = 0; i < recDosen.size(); i++)
					{
						cout << "Nama 			: " << recDosen[i].getNama() << endl;
						cout << "NRP 			: " << recDosen[i].getNpp() << endl;
						cout << "Id 			: " << recDosen[i].getId() << endl;
						cout << "Departemen 	: " << recDosen[i].getDepartemen() << endl;
						cout << "Pendidikan 	: " << recDosen[i].getPendidikan() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
				break;
			case 6:
				{
					for (size_t i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama		: " << recTendik[i].getNama() << endl;
						cout << "Id 		: " << recTendik[i].getId() << endl;
						cout << "Unit 		: " << recTendik[i].getUnit() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
			case 7: 
			{
					Matakuliah* matkulSemester1 = new Matakuliah ("Matematika I\n Fisika I\n Pancasila\n Bahasa Inggris\n Dasar Pemrograman\n Pengantar Teknologi Elektro\n", 18);
					matkulSemester1->display();
					Matakuliah* matkulSemester2 = new Matakuliah ("Bahasa Indonesia\n Fisika II\n Kewarganegaraan\n Kimia I\n Matematika II\n Pemrograman Lanjut\n Rangkaian Listrik\n", 18);
					matkulSemester2->d isplay();
					Matakuliah* matkulSemester3 = new Matakuliah ("Aljabar Linier dan Matematika Diskrit\n Metode Numerik\n Rangkaian Elektronika\n Sistem Operasi\n Sistem Telekomunikasi\n Struktur Data dan Analisa Algoritma\n", 18);
					matkulSemester3->display();
					Matakuliah* matkulSemester4 = new Matakuliah ("Desain dan Rekayasa Sistem\n Pengolahan Sinyal Digital\n Persamaan Differensial dan Deret untuk Teknik\n Probabilitas dan Statistik\n Rangkaian Digital dan Lab\n Sistem Manajemen Basis Data\n", 18);
					matkulSemester4->display();
					Matakuliah* matkulSemester5 = new Matakuliah ("Jaringan Komputer dan Lab\n Arsitektur dan Organisasi  Sistem Komputer\n Pembelajaran Mesin Pengolahan Citra dan Video\n Sistem Mikroprosesor dan Mikrokontroler\n", 19);
					matkulSemester5->display();
					Matakuliah* matkulSemester6 = new Matakuliah ("Kerja Praktik\n Pemrograman Sistem dan Jaringan\n Sistem Tertanam dan Lab\n Visi Komputer\n Technopreuner\n", 20);
					matkulSemester6->display();
					Matakuliah* matkulSemester7 = new Matakuliah ("Pra Tugas Akhir\n Proyek Telematika\n Jaringan Sensor Nirkabel dan Internet of Things\n Sekuriti Sistem Komputer\n", 18);
					matkulSemester7->display();
					Matakuliah* matkulSemester8 = new Matakuliah ("Tugas Akhir\n Kompetensi Teknologi Elektro\n Wawasan dan Aplikasi Teknologi\n", 15);
					matkulSemester8->display();
					Matakuliah* matkulAgama = new Matakuliah ("Agama Islam\n Agama Kristen\n Agama Katolik\n Agama Hindu\n Agama Buddha\n", 12);
					matkulAgama->display();
					Matakuliah* matkulPilihan = new Matakuliah ("Desain Game\n Pemrograman Game\n Kecerdasan Komputasional untuk Game\n Perangkat Terprogram\n Sistem Konkuren Waktu Nyata\n Pemrograman Mobile Robot\n Probabilistic Robotic\n Jaringan Komputer Lanjut\n Komputasi Terdistribusi\n Sistem Komputasi Grid dan Cloud\n
    				Web Intelligence dan Big Data\n Mobile Programming\n Komputasi Ubiquitous\n Forensik Digital\n Informatika Medis\n Grafika Komputer\n Soft Computing dan Deep Learning\n Interaksi Komputer Manusia\n", 57);
					matkulPilihan->display();
			}	
				break;
		}
			}else{
				cout << "Invalid Password !" << endl;
			}
		}else{
			cout << "Invalid Username !" << endl;
		}
	}
	return 0;
}
