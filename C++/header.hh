/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// header.hh
#ifndef HEADER_HH
#define HEADER_HH

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string idProduct;
    string name;
    string brand;
    string price;

public:
    Product();

    void setIDProduct(string idProduct);
    string getIDProduct();

    void setName(string name);
    string getName();

    void setBrand(string brand);
    string getBrand();

    void setPrice(string price);
    string getPrice();

    ~Product();
};

class Clothing : public Product
{
private:
    string size;
    string material;
    string gender;

public:
    Clothing();

    void setSize(string size);
    string getSize();

    void setMaterial(string material);
    string getMaterial();

    void setGender(string gender);
    string getGender();

    ~Clothing();
};

class Shirt : public Clothing
{
private:
    string color;
    string sleeve_type;

public:
    Shirt();

    void setColor(string color);
    string getColor();

    void setSleeveType(string sleeve_type);
    string getSleeveType();

    ~Shirt();
};

#endif // HEADER_HH
