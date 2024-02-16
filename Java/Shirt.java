/*Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// Shirt: color, sleeve_type
class Shirt extends Clothing{
    private String color;
    private String sleeve_type;

    Shirt()
    {

    }

    public void setColor(String color)
    {
        this.color = color;
    }

    public String getColor()
    {
        return this.color;
    }

    public void setSleeveType(String sleeve_type)
    {
        this.sleeve_type = sleeve_type;
    }

    public String getSleeveType()
    {
        return this.sleeve_type;
    }
}
