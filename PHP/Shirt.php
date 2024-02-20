<?php
// Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
// dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
// melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

require_once 'Clothing.php';

class Shirt extends Clothing
{
    private $color;
    private $sleeveType;

    public function __construct()
	{
	}

    // public function __construct($color, $sleeveType)
    // {
    //     $this->color = $color;
    //     $this->sleeveType = $sleeveType;
    // }

    public function setColor($color)
    {
        $this->color = $color;
    }

    public function getColor()
    {
        return $this->color;
    }

    public function setSleeveType($sleeveType)
    {
        $this->sleeveType = $sleeveType;
    }

    public function getSleeveType()
    {
        return $this->sleeveType;
    }

    public function __destruct()
    {
    }
}
?>
