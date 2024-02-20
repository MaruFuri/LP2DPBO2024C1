<?php
// Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
// dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
// melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class Product
{
    private $idProduct;
    private $name;
    private $brand;
    private $price;

    public function __construct()
	{
	}

    // public function __construct($idProduct, $name, $brand, $price)
    // {
    //     $this->idProduct = $idProduct;
    //     $this->name = $name;
    //     $this->brand = $brand;
    //     $this->price = $price;
    // }

    public function setIDProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    public function getIDProduct()
    {
        return $this->idProduct;
    }

    public function setName($name)
    {
        $this->name = $name;
    }

    public function getName()
    {
        return $this->name;
    }

    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function getBrand()
    {
        return $this->brand;
    }

    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function getPrice()
    {
        return $this->price;
    }

    public function __destruct()
    {
    }
}
?>
