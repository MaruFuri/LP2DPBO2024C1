# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 2
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
from Clothing import Clothing

class Shirt(Clothing):
    def __init__(self):
        super().__init__()
        self.color = ""
        self.sleeve_type = ""

    def setColor(self, color):
        self.color = color

    def getColor(self):
        return self.color

    def setSleeveType(self, sleeve_type):
        self.sleeve_type = sleeve_type

    def getSleeveType(self):
        return self.sleeve_type
