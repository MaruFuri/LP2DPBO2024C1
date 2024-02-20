/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// Import Library
#include <iostream>
#include <string>
#include "header.hh" // Sesuaikan nama file header sesuai kebutuhan

// Implementasi kelas Product
Product::Product()
{
}

void Product::setIDProduct(string idProduct)
{
    this->idProduct = idProduct;
}

string Product::getIDProduct()
{
    return this->idProduct;
}

void Product::setName(string name)
{
    this->name = name;
}

string Product::getName()
{
    return this->name;
}

void Product::setBrand(string brand)
{
    this->brand = brand;
}

string Product::getBrand()
{
    return this->brand;
}

void Product::setPrice(string price)
{
    this->price = price;
}

string Product::getPrice()
{
    return this->price;
}

Product::~Product()
{
    // Jika diperlukan tindakan spesifik saat objek dihancurkan, letakkan di sini.
}
