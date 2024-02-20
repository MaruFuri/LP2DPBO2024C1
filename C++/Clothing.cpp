/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// Import Library
#include <iostream>
#include <string>
#include "header.hh" // Sesuaikan nama file header sesuai kebutuhan

// Implementasi kelas Clothing
Clothing::Clothing() : Product()
{
    // Tidak perlu melakukan apa-apa di sini, karena variabel anggota sudah diinisialisasi oleh default.
}

void Clothing::setSize(string size)
{
    this->size = size;
}

string Clothing::getSize()
{
    return this->size;
}

void Clothing::setMaterial(string material)
{
    this->material = material;
}

string Clothing::getMaterial()
{
    return this->material;
}

void Clothing::setGender(string gender)
{
    this->gender = gender;
}

string Clothing::getGender()
{
    return this->gender;
}

Clothing::~Clothing()
{
    // Jika diperlukan tindakan spesifik saat objek dihancurkan, letakkan di sini.
}
