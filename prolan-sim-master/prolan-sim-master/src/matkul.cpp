#include <iostream>
#include <string>
#include "include/matkul.hpp"

Matakuliah::Matakuliah(const char* namaMatkul, const char* totSks){
        this->namaMatkul = namaMatkul;
        this->totSks = totSks;
}

void Matakuliah::display(){
     for(int i = 1; i<=10; i++)
     {
        if(i<9){
        cout << "Semester" << i << "\n" << this->namaMatkul << endl;
        cout << "Total sks : " << Matakuliah->sks << endl;
        }else if(i=9){
        cout << "Matakuliah Agama" << "\n" << this->namaMatkul << endl;
        cout << "Total sks : " << Matakuliah->sks << endl;
        }else if(i=10){
        cout << "Matakuliah Pilihan" << "\n" << this->namaMatkul << endl;   
        cout << "Total sks : " << Matakuliah->sks << endl;
        }
     } 
}

