
# Owen Kelley
# CSC 1710

# car.py
# defines the Car class

class Car:

    # Constructor
    def __init__(self, mk, mo, pr):
        self.__make = mk
        self.__model = mo
        self.__price = pr

    # Getters (Accessors)
    def getMake(self):
        return self.__make

    def getModel(self):
        return self.__model

    def getPrice(self):
        return self.__price

    # Setter (Mutator)
    def setPrice(self, newPrice):
        self.__price = newPrice


