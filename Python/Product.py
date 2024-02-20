# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
class Product:
    def __init__(self, idProduct="", name="", brand="", price=""):
        self.idProduct = idProduct
        self.name = name
        self.brand = brand
        self.price = price

    def setIDProduct(self, idProduct):
        self.idProduct = idProduct

    def getIDProduct(self):
        return self.idProduct

    def setName(self, name):
        self.name = name

    def getName(self):
        return self.name

    def setBrand(self, brand):
        self.brand = brand

    def getBrand(self):
        return self.brand

    def setPrice(self, price):
        self.price = price

    def getPrice(self):
        return self.price
