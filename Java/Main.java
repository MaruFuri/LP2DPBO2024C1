/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
import java.util.ArrayList;
import java.util.Scanner;

class Main {
    public static void main(String[] args)
    {
        // Product dataProduct;
        // Clothing dataClothing;
        Shirt dataShirt1;
        Shirt dataShirt2;
        Shirt dataShirt3;

        dataShirt1 = new Shirt();
        dataShirt2 = new Shirt();
        dataShirt3 = new Shirt();

        // Scanner untuk input dari user
        Scanner scanner = new Scanner(System.in);

        // Meminta masukan dari user untuk dataShirt1
        System.out.println("Masukkan data untuk Shirt 1:");
        System.out.print("ID Product: ");
        dataShirt1.setIDProduct(scanner.nextLine());
        System.out.print("Name: ");
        dataShirt1.setName(scanner.nextLine());
        System.out.print("Brand: ");
        dataShirt1.setBrand(scanner.nextLine());
        System.out.print("Price: ");
        dataShirt1.setPrice(scanner.nextLine());
        System.out.print("Size: ");
        dataShirt1.setSize(scanner.nextLine());
        System.out.print("Material: ");
        dataShirt1.setMaterial(scanner.nextLine());
        System.out.print("Gender: ");
        dataShirt1.setGender(scanner.nextLine());
        System.out.print("Color: ");
        dataShirt1.setColor(scanner.nextLine());
        System.out.print("Sleeve Type: ");
        dataShirt1.setSleeveType(scanner.nextLine());

        // Meminta masukan dari user untuk dataShirt2
        System.out.println("\nMasukkan data untuk Shirt 2:");
        System.out.print("ID Product: ");
        dataShirt2.setIDProduct(scanner.nextLine());
        System.out.print("Name: ");
        dataShirt2.setName(scanner.nextLine());
        System.out.print("Brand: ");
        dataShirt2.setBrand(scanner.nextLine());
        System.out.print("Price: ");
        dataShirt2.setPrice(scanner.nextLine());
        System.out.print("Size: ");
        dataShirt2.setSize(scanner.nextLine());
        System.out.print("Material: ");
        dataShirt2.setMaterial(scanner.nextLine());
        System.out.print("Gender: ");
        dataShirt2.setGender(scanner.nextLine());
        System.out.print("Color: ");
        dataShirt2.setColor(scanner.nextLine());
        System.out.print("Sleeve Type: ");
        dataShirt2.setSleeveType(scanner.nextLine());

        // Meminta masukan dari user untuk dataShirt3
        System.out.println("\nMasukkan data untuk Shirt 3:");
        System.out.print("ID Product: ");
        dataShirt3.setIDProduct(scanner.nextLine());
        System.out.print("Name: ");
        dataShirt3.setName(scanner.nextLine());
        System.out.print("Brand: ");
        dataShirt3.setBrand(scanner.nextLine());
        System.out.print("Price: ");
        dataShirt3.setPrice(scanner.nextLine());
        System.out.print("Size: ");
        dataShirt3.setSize(scanner.nextLine());
        System.out.print("Material: ");
        dataShirt3.setMaterial(scanner.nextLine());
        System.out.print("Gender: ");
        dataShirt3.setGender(scanner.nextLine());
        System.out.print("Color: ");
        dataShirt3.setColor(scanner.nextLine());
        System.out.print("Sleeve Type: ");
        dataShirt3.setSleeveType(scanner.nextLine());

        // Menyimpan objek-objek ke dalam ArrayList
        ArrayList<Shirt> shirtList = new ArrayList<>();
        shirtList.add(dataShirt1);
        shirtList.add(dataShirt2);
        shirtList.add(dataShirt3);

        // Menampilkan data dari semua objek dalam bentuk tabel
        // System.out.println("\n===== Data Shirt =====");
        // System.out.printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",
        //         "ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");

        // for (Shirt shirt : shirtList) {
        //     System.out.printf("%-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s %-15s\n",
        //             shirt.getIDProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice(),
        //             shirt.getSize(), shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getSleeveType());
        // }

        String[] columnTitles = {"ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type"};
        int[] maxColumnLengths = {15, 15, 15, 15, 15, 15, 15, 15, 15};

        for (String title : columnTitles) {
            System.out.printf("%-" + maxColumnLengths[0] + "s ", title);
        }
        System.out.println();

        // Pemisah
        for (int length : maxColumnLengths) {
            for (int i = 0; i < length; i++) {
                System.out.print("-");
            }
            System.out.print(" ");
        }
        System.out.println();

        // Data objek
        for (Shirt shirt : shirtList) {
            System.out.printf("%-" + maxColumnLengths[0] + "s ", shirt.getIDProduct());
            System.out.printf("%-" + maxColumnLengths[1] + "s ", shirt.getName());
            System.out.printf("%-" + maxColumnLengths[2] + "s ", shirt.getBrand());
            System.out.printf("%-" + maxColumnLengths[3] + "s ", shirt.getPrice());
            System.out.printf("%-" + maxColumnLengths[4] + "s ", shirt.getSize());
            System.out.printf("%-" + maxColumnLengths[5] + "s ", shirt.getMaterial());
            System.out.printf("%-" + maxColumnLengths[6] + "s ", shirt.getGender());
            System.out.printf("%-" + maxColumnLengths[7] + "s ", shirt.getColor());
            System.out.printf("%-" + maxColumnLengths[8] + "s ", shirt.getSleeveType());
            System.out.println();
        }
    
    }
}

