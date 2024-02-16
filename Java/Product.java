/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Product: idProduct, name, brand, price
class Product
{
    private String idProduct;
    private String name;
    private String brand;
    private String price;

    Product()
    {

    }

    public void setIDProduct(String idProduct)
    {
        this.idProduct = idProduct;
    }

    public String getIDProduct()
    {
        return this.idProduct;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public String getName()
    {
        return this.name;
    }

    public void setBrand(String brand)
    {
        this.brand = brand;
    }

    public String getBrand()
    {
        return this.brand;
    }

    public void setPrice(String price)
    {
        this.price = price;
    }

    public String getPrice()
    {
        return this.price;
    }
}