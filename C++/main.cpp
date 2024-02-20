/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <iostream>
#include <string>
#include <iomanip> // Untuk menata tampilan tabel
using namespace std;

// Import Class
#include "header.hh"
// #include "Product.cpp"
// #include "Clothing.cpp"
// #include "Shirt.cpp"
// #include "kelas.cpp"

int main()
{
     // Membuat objek Shirt
     Shirt dataShirt1;
     Shirt dataShirt2;
     Shirt dataShirt3;

     string idProduct, name, brand, price, size, material, gender, color, sleeve_type;

     // Meminta input dari pengguna
     cout << "Masukkan data untuk Shirt 1:" << endl;
     cout << "ID Product: ";
     getline(cin, idProduct);
     dataShirt1.setIDProduct(idProduct);

     cout << "Name: ";
     getline(cin, name);
     dataShirt1.setName(name);

     cout << "Brand: ";
     getline(cin, brand);
     dataShirt1.setBrand(brand);

     cout << "Price: ";
     getline(cin, price);
     dataShirt1.setPrice(price);

     cout << "Size: ";
     getline(cin, size);
     dataShirt1.setSize(size);

     cout << "Material: ";
     getline(cin, material);
     dataShirt1.setMaterial(material);

     cout << "Gender: ";
     getline(cin, gender);
     dataShirt1.setGender(gender);

     cout << "Color: ";
     getline(cin, color);
     dataShirt1.setColor(color);

     cout << "Sleeve Type: ";
     getline(cin, sleeve_type);
     dataShirt1.setSleeveType(sleeve_type);

     // Meminta input dari pengguna
     cout << "Masukkan data untuk Shirt 2:" << endl;
     cout << "ID Product: ";
     getline(cin, idProduct);
     dataShirt2.setIDProduct(idProduct);

     cout << "Name: ";
     getline(cin, name);
     dataShirt2.setName(name);

     cout << "Brand: ";
     getline(cin, brand);
     dataShirt2.setBrand(brand);

     cout << "Price: ";
     getline(cin, price);
     dataShirt2.setPrice(price);

     cout << "Size: ";
     getline(cin, size);
     dataShirt2.setSize(size);

     cout << "Material: ";
     getline(cin, material);
     dataShirt2.setMaterial(material);

     cout << "Gender: ";
     getline(cin, gender);
     dataShirt2.setGender(gender);

     cout << "Color: ";
     getline(cin, color);
     dataShirt2.setColor(color);

     cout << "Sleeve Type: ";
     getline(cin, sleeve_type);
     dataShirt2.setSleeveType(sleeve_type);

     // Meminta input dari pengguna
     cout << "Masukkan data untuk Shirt 3:" << endl;
     cout << "ID Product: ";
     getline(cin, idProduct);
     dataShirt3.setIDProduct(idProduct);

     cout << "Name: ";
     getline(cin, name);
     dataShirt3.setName(name);

     cout << "Brand: ";
     getline(cin, brand);
     dataShirt3.setBrand(brand);

     cout << "Price: ";
     getline(cin, price);
     dataShirt3.setPrice(price);

     cout << "Size: ";
     getline(cin, size);
     dataShirt3.setSize(size);

     cout << "Material: ";
     getline(cin, material);
     dataShirt3.setMaterial(material);

     cout << "Gender: ";
     getline(cin, gender);
     dataShirt3.setGender(gender);

     cout << "Color: ";
     getline(cin, color);
     dataShirt3.setColor(color);

     cout << "Sleeve Type: ";
     getline(cin, sleeve_type);
     dataShirt3.setSleeveType(sleeve_type);

     // Menampilkan data dalam bentuk tabel
     cout << "\nData Shirt:\n";
     cout << setw(15) << "ID Product" << setw(15) << "Name" << setw(15) << "Brand" << setw(15) << "Price"
          << setw(15) << "Size" << setw(15) << "Material" << setw(15) << "Gender" << setw(15) << "Color"
          << setw(15) << "Sleeve Type" << endl;

     cout << setw(15) << dataShirt1.getIDProduct() << setw(15) << dataShirt1.getName() << setw(15) << dataShirt1.getBrand()
          << setw(15) << dataShirt1.getPrice() << setw(15) << dataShirt1.getSize() << setw(15) << dataShirt1.getMaterial()
          << setw(15) << dataShirt1.getGender() << setw(15) << dataShirt1.getColor() << setw(15) << dataShirt1.getSleeveType() << endl;

     cout << setw(15) << dataShirt2.getIDProduct() << setw(15) << dataShirt2.getName() << setw(15) << dataShirt2.getBrand()
          << setw(15) << dataShirt2.getPrice() << setw(15) << dataShirt2.getSize() << setw(15) << dataShirt2.getMaterial()
          << setw(15) << dataShirt2.getGender() << setw(15) << dataShirt2.getColor() << setw(15) << dataShirt2.getSleeveType() << endl;

     cout << setw(15) << dataShirt3.getIDProduct() << setw(15) << dataShirt3.getName() << setw(15) << dataShirt3.getBrand()
          << setw(15) << dataShirt3.getPrice() << setw(15) << dataShirt3.getSize() << setw(15) << dataShirt3.getMaterial()
          << setw(15) << dataShirt3.getGender() << setw(15) << dataShirt3.getColor() << setw(15) << dataShirt3.getSleeveType() << endl;

     // Menampilkan data dalam bentuk list
     std::cout << "\nData Shirt 1:\n";
     std::cout << "ID Product: " << dataShirt1.getIDProduct() << std::endl;
     std::cout << "Name: " << dataShirt1.getName() << std::endl;
     std::cout << "Brand: " << dataShirt1.getBrand() << std::endl;
     std::cout << "Price: " << dataShirt1.getPrice() << std::endl;
     std::cout << "Size: " << dataShirt1.getSize() << std::endl;
     std::cout << "Material: " << dataShirt1.getMaterial() << std::endl;
     std::cout << "Gender: " << dataShirt1.getGender() << std::endl;
     std::cout << "Color: " << dataShirt1.getColor() << std::endl;
     std::cout << "Sleeve Type: " << dataShirt1.getSleeveType() << std::endl;

     // Menampilkan data dalam bentuk list
     std::cout << "\nData Shirt 2:\n";
     std::cout << "ID Product: " << dataShirt2.getIDProduct() << std::endl;
     std::cout << "Name: " << dataShirt2.getName() << std::endl;
     std::cout << "Brand: " << dataShirt2.getBrand() << std::endl;
     std::cout << "Price: " << dataShirt2.getPrice() << std::endl;
     std::cout << "Size: " << dataShirt2.getSize() << std::endl;
     std::cout << "Material: " << dataShirt2.getMaterial() << std::endl;
     std::cout << "Gender: " << dataShirt2.getGender() << std::endl;
     std::cout << "Color: " << dataShirt2.getColor() << std::endl;
     std::cout << "Sleeve Type: " << dataShirt2.getSleeveType() << std::endl;

     // Menampilkan data dalam bentuk list
     std::cout << "\nData Shirt 3:\n";
     std::cout << "ID Product: " << dataShirt3.getIDProduct() << std::endl;
     std::cout << "Name: " << dataShirt3.getName() << std::endl;
     std::cout << "Brand: " << dataShirt3.getBrand() << std::endl;
     std::cout << "Price: " << dataShirt3.getPrice() << std::endl;
     std::cout << "Size: " << dataShirt3.getSize() << std::endl;
     std::cout << "Material: " << dataShirt3.getMaterial() << std::endl;
     std::cout << "Gender: " << dataShirt3.getGender() << std::endl;
     std::cout << "Color: " << dataShirt3.getColor() << std::endl;
     std::cout << "Sleeve Type: " << dataShirt3.getSleeveType() << std::endl;

     return 0;
}
