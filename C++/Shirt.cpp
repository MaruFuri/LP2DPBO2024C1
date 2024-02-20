/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// Import Library
#include <iostream>
#include <string>
#include "header.hh" // Sesuaikan nama file header sesuai kebutuhan

// Implementasi kelas Shirt
Shirt::Shirt() : Clothing()
{
    // Tidak perlu melakukan apa-apa di sini, karena variabel anggota sudah diinisialisasi oleh default.
}

void Shirt::setColor(string color)
{
    this->color = color;
}

string Shirt::getColor()
{
    return this->color;
}

void Shirt::setSleeveType(string sleeve_type)
{
    this->sleeve_type = sleeve_type;
}

string Shirt::getSleeveType()
{
    return this->sleeve_type;
}

Shirt::~Shirt()
{
    // Jika diperlukan tindakan spesifik saat objek dihancurkan, letakkan di sini.
}
