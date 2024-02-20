# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
from Product import Product

class Clothing(Product):
    def __init__(self):
        super().__init__()
        self.size = ""
        self.material = ""
        self.gender = ""

    def setSize(self, size):
        self.size = size

    def getSize(self):
        return self.size

    def setMaterial(self, material):
        self.material = material

    def getMaterial(self):
        return self.material

    def setGender(self, gender):
        self.gender = gender

    def getGender(self):
        return self.gender
