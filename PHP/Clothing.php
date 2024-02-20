<?php
// Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
// dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
// melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

require_once 'Product.php';

class Clothing extends Product
{
    private $size;
    private $material;
    private $gender;

    public function __construct()
	{
	}

    // public function __construct($size, $material, $gender)
    // {
    //     $this->size = $size;
    //     $this->material = $material;
    //     $this->gender = $gender;
    // }

    public function setSize($size)
    {
        $this->size = $size;
    }

    public function getSize()
    {
        return $this->size;
    }

    public function setMaterial($material)
    {
        $this->material = $material;
    }

    public function getMaterial()
    {
        return $this->material;
    }

    public function setGender($gender)
    {
        $this->gender = $gender;
    }

    public function getGender()
    {
        return $this->gender;
    }

    public function __destruct()
    {
    }
}
?>
