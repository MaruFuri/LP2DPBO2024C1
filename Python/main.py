# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
from Shirt import Shirt

# Membuat objek Shirt
dataShirt1 = Shirt()
dataShirt2 = Shirt()
dataShirt3 = Shirt()

# Meminta input dari pengguna untuk Shirt 1
print("Masukkan data untuk Shirt 1:")
dataShirt1.setIDProduct(input("ID Product: "))
dataShirt1.setName(input("Name: "))
dataShirt1.setBrand(input("Brand: "))
dataShirt1.setPrice(input("Price: "))
dataShirt1.setSize(input("Size: "))
dataShirt1.setMaterial(input("Material: "))
dataShirt1.setGender(input("Gender: "))
dataShirt1.setColor(input("Color: "))
dataShirt1.setSleeveType(input("Sleeve Type: "))

# Meminta input dari pengguna untuk Shirt 2
print("\nMasukkan data untuk Shirt 2:")
dataShirt2.setIDProduct(input("ID Product: "))
dataShirt2.setName(input("Name: "))
dataShirt2.setBrand(input("Brand: "))
dataShirt2.setPrice(input("Price: "))
dataShirt2.setSize(input("Size: "))
dataShirt2.setMaterial(input("Material: "))
dataShirt2.setGender(input("Gender: "))
dataShirt2.setColor(input("Color: "))
dataShirt2.setSleeveType(input("Sleeve Type: "))

# Meminta input dari pengguna untuk Shirt 3
print("\nMasukkan data untuk Shirt 3:")
dataShirt3.setIDProduct(input("ID Product: "))
dataShirt3.setName(input("Name: "))
dataShirt3.setBrand(input("Brand: "))
dataShirt3.setPrice(input("Price: "))
dataShirt3.setSize(input("Size: "))
dataShirt3.setMaterial(input("Material: "))
dataShirt3.setGender(input("Gender: "))
dataShirt3.setColor(input("Color: "))
dataShirt3.setSleeveType(input("Sleeve Type: "))

# Menampilkan data dalam bentuk tabel
print("\nData Shirt:")
print("{:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15}".format(
    "ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type"))
print("{:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15}".format(
    dataShirt1.getIDProduct(), dataShirt1.getName(), dataShirt1.getBrand(), dataShirt1.getPrice(),
    dataShirt1.getSize(), dataShirt1.getMaterial(), dataShirt1.getGender(), dataShirt1.getColor(), dataShirt1.getSleeveType()))
print("{:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15}".format(
    dataShirt2.getIDProduct(), dataShirt2.getName(), dataShirt2.getBrand(), dataShirt2.getPrice(),
    dataShirt2.getSize(), dataShirt2.getMaterial(), dataShirt2.getGender(), dataShirt2.getColor(), dataShirt2.getSleeveType()))
print("{:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15} {:<15}".format(
    dataShirt3.getIDProduct(), dataShirt3.getName(), dataShirt3.getBrand(), dataShirt3.getPrice(),
    dataShirt3.getSize(), dataShirt3.getMaterial(), dataShirt3.getGender(), dataShirt3.getColor(), dataShirt3.getSleeveType()))

# Menampilkan data dalam bentuk list
print("\nData Shirt 1:")
print("ID Product:", dataShirt1.getIDProduct())
print("Name:", dataShirt1.getName())
print("Brand:", dataShirt1.getBrand())
print("Price:", dataShirt1.getPrice())
print("Size:", dataShirt1.getSize())
print("Material:", dataShirt1.getMaterial())
print("Gender:", dataShirt1.getGender())
print("Color:", dataShirt1.getColor())
print("Sleeve Type:", dataShirt1.getSleeveType())

# Menampilkan data dalam bentuk list
print("\nData Shirt 2:")
print("ID Product:", dataShirt2.getIDProduct())
print("Name:", dataShirt2.getName())
print("Brand:", dataShirt2.getBrand())
print("Price:", dataShirt2.getPrice())
print("Size:", dataShirt2.getSize())
print("Material:", dataShirt2.getMaterial())
print("Gender:", dataShirt2.getGender())
print("Color:", dataShirt2.getColor())
print("Sleeve Type:", dataShirt2.getSleeveType())

# Menampilkan data dalam bentuk list
print("\nData Shirt 3:")
print("ID Product:", dataShirt3.getIDProduct())
print("Name:", dataShirt3.getName())
print("Brand:", dataShirt3.getBrand())
print("Price:", dataShirt3.getPrice())
print("Size:", dataShirt3.getSize())
print("Material:", dataShirt3.getMaterial())
print("Gender:", dataShirt3.getGender())
print("Color:", dataShirt3.getColor())
print("Sleeve Type:", dataShirt3.getSleeveType())
