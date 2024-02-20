<?php
// Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
// dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
// melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

require_once 'Shirt.php';

// Creating the first shirt instance
$shirt1 = new Shirt();
$shirt1->setIDProduct("001");
$shirt1->setName("Casual Shirt");
$shirt1->setBrand("Erigo");
$shirt1->setPrice("200K");
$shirt1->setSize("XL");
$shirt1->setMaterial("Cotton");
$shirt1->setGender("Male");
$shirt1->setColor("Black");
$shirt1->setSleeveType("Long");

// Creating the second shirt instance
$shirt2 = new Shirt();
$shirt2->setIDProduct("002");
$shirt2->setName("Casual Shirt");
$shirt2->setBrand("H&M");
$shirt2->setPrice("500K");
$shirt2->setSize("XL");
$shirt2->setMaterial("Cotton");
$shirt2->setGender("Unisex");
$shirt2->setColor("Black");
$shirt2->setSleeveType("Long");

// Creating the third shirt instance
$shirt3 = new Shirt();
$shirt3->setIDProduct("003");
$shirt3->setName("Sporty Shirt");
$shirt3->setBrand("Uniqlo");
$shirt3->setPrice("300K");
$shirt3->setSize("L");
$shirt3->setMaterial("Cotton");
$shirt3->setGender("Female");
$shirt3->setColor("White");
$shirt3->setSleeveType("Short");

// Outputting the information for each shirt
// echo "ID            : " . $shirt1->getIDProduct() . "<br>";
// echo "Name          : " . $shirt1->getName() . "<br>";
// echo "Brand         : " . $shirt1->getBrand() . "<br>";
// echo "Price         : " . $shirt1->getPrice() . "<br>";
// echo "Size          : " . $shirt1->getSize() . "<br>";
// echo "Material      : " . $shirt1->getMaterial() . "<br>";
// echo "Gender        : " . $shirt1->getGender() . "<br>";
// echo "Color         : " . $shirt1->getColor() . "<br>";
// echo "Sleeve Type   : " . $shirt1->getSleeveType() . "<br>";

// echo $shirt2->getIDProduct() . "<br>";
// echo $shirt2->getName() . "<br>";
// echo $shirt2->getBrand() . "<br>";
// echo $shirt2->getPrice() . "<br>";
// echo $shirt2->getSize() . "<br>";
// echo $shirt2->getMaterial() . "<br>";
// echo $shirt2->getGender() . "<br>";
// echo $shirt2->getColor() . "<br>";
// echo $shirt2->getSleeveType() . "<br>";

// echo $shirt3->getIDProduct() . "<br>";
// echo $shirt3->getName() . "<br>";
// echo $shirt3->getBrand() . "<br>";
// echo $shirt3->getPrice() . "<br>";
// echo $shirt3->getSize() . "<br>";
// echo $shirt3->getMaterial() . "<br>";
// echo $shirt3->getGender() . "<br>";
// echo $shirt3->getColor() . "<br>";
// echo $shirt3->getSleeveType() . "<br>";
echo "<b>DATA SHIRT</b>";
echo "<br>";

echo "<table>";
echo "<tr><td>ID</td><td>:</td><td>" . $shirt1->getIDProduct() . "</td></tr>";
echo "<tr><td>Name</td><td>:</td><td>" . $shirt1->getName() . "</td></tr>";
echo "<tr><td>Brand</td><td>:</td><td>" . $shirt1->getBrand() . "</td></tr>";
echo "<tr><td>Price</td><td>:</td><td>" . $shirt1->getPrice() . "</td></tr>";
echo "<tr><td>Size</td><td>:</td><td>" . $shirt1->getSize() . "</td></tr>";
echo "<tr><td>Material</td><td>:</td><td>" . $shirt1->getMaterial() . "</td></tr>";
echo "<tr><td>Gender</td><td>:</td><td>" . $shirt1->getGender() . "</td></tr>";
echo "<tr><td>Color</td><td>:</td><td>" . $shirt1->getColor() . "</td></tr>";
echo "<tr><td>Sleeve Type</td><td>:</td><td>" . $shirt1->getSleeveType() . "</td></tr>";
echo "</table>";
echo "<br>";

echo "<table>";
echo "<tr><td>ID</td><td>:</td><td>" . $shirt2->getIDProduct() . "</td></tr>";
echo "<tr><td>Name</td><td>:</td><td>" . $shirt2->getName() . "</td></tr>";
echo "<tr><td>Brand</td><td>:</td><td>" . $shirt2->getBrand() . "</td></tr>";
echo "<tr><td>Price</td><td>:</td><td>" . $shirt2->getPrice() . "</td></tr>";
echo "<tr><td>Size</td><td>:</td><td>" . $shirt2->getSize() . "</td></tr>";
echo "<tr><td>Material</td><td>:</td><td>" . $shirt2->getMaterial() . "</td></tr>";
echo "<tr><td>Gender</td><td>:</td><td>" . $shirt2->getGender() . "</td></tr>";
echo "<tr><td>Color</td><td>:</td><td>" . $shirt2->getColor() . "</td></tr>";
echo "<tr><td>Sleeve Type</td><td>:</td><td>" . $shirt2->getSleeveType() . "</td></tr>";
echo "</table>";
echo "<br>";

echo "<table>";
echo "<tr><td>ID</td><td>:</td><td>" . $shirt3->getIDProduct() . "</td></tr>";
echo "<tr><td>Name</td><td>:</td><td>" . $shirt3->getName() . "</td></tr>";
echo "<tr><td>Brand</td><td>:</td><td>" . $shirt3->getBrand() . "</td></tr>";
echo "<tr><td>Price</td><td>:</td><td>" . $shirt3->getPrice() . "</td></tr>";
echo "<tr><td>Size</td><td>:</td><td>" . $shirt3->getSize() . "</td></tr>";
echo "<tr><td>Material</td><td>:</td><td>" . $shirt3->getMaterial() . "</td></tr>";
echo "<tr><td>Gender</td><td>:</td><td>" . $shirt3->getGender() . "</td></tr>";
echo "<tr><td>Color</td><td>:</td><td>" . $shirt3->getColor() . "</td></tr>";
echo "<tr><td>Sleeve Type</td><td>:</td><td>" . $shirt3->getSleeveType() . "</td></tr>";
echo "</table>";
echo "<br>";



?>
