#ifndef __tambahMatkul_HPP__
#define __tambahMatkul_HPP__

#include <iostream>
#include <string>
#include <vector>

class Matakuliah{
    public:
    std::string namaMatkul;
    int sks;

    
    Matakuliah(const char* matkul, const char* totSks);
    void display();
};
#endif
