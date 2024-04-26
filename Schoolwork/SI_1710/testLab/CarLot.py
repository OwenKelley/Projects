
# Owen Kelley
# CSC 1710

#################################################
#
# File: CarLot.py
#
#
#
#################################################

import car

def main():
    print("*** Welcome to the Car Lot ***")
    cars = readFile()  # Returns a list of Car objects
    choice = showMenu()
    while choice != "e":
        if choice == "s":
            showCars(cars)
        if choice == "a":
            addCar(cars)
        if choice == "r":
            removeCar(cars)
        if choice == "c":
            changePrice(cars)
        choice = showMenu()

def showMenu():
    print("\nChoose an option:")
    print("(s)how all cars on lot")
    print("(a)dd a car")
    print("(r)emove a car")
    print("(c)hange a car price")
    print("(e)xit program")
    choice = input()
    print()
    return choice

# The readFile() function reads the cardata.txt file, creates a new
# Car object for each line in the file, and returns a list of Car objects.
def readFile():
#  obj = car.Car(mk, mo, pr)
  part = []
  List = []
  inFile = open('cardata.txt', 'r');


  for line in inFile:
    for word in line.split():
      part.append(word)
#      word=word+1
      part.append(word)
#      word=word+1
      part.append(word)

      obj = car.Car(part[0],part[1],part[2])

      List.append(obj)
#  return List

def showCars(cars):
  i=0
  while i < 1000:
    if i == '':
      break
    else:
      cars.getMake()

# The addCar() function allows the user to add a new car.
# It updates the list, and calls writeFile() to save the data.
def addCar(cars):
  print()

# The removeCar() function allows the user to choose a car (by number)
# and remove it from inventory.  It calls writeFile() to save the data.
def removeCar(cars):
  print()

# The changePrice() function allows the user to choose a car (by number)
# and set a new price.  It saves the new data in the file.
def changePrice(cars):
# div 3
  print()  

# The writeFile() function (called by the three functions above)
# Writes the current list of cars to a file.
def writeFile(cars):
  print()

main()

