print("This started")
##############################
#def listMin():
##############################
#def listMax():
##############################
#def sortList():
##############################
'''
def printList():
  for row in arry:
    for ele in row:
      print(ele)
'''
##############################
def loadList(lst, inLis):
  f=open("student_records.txt", "r")
  inLis=eval(f.read())
  f.close()

  inLis.append(lst)
  



'''
# 3 columns
# n rows

#  inputFile = str(input("Enter the name of the file:  "))
#  inputFile = input("Enter input file name: ")
  inputFile = "student_records.txt"
  f = open(inputFile, 'r');
  if not f:
    print("Cannot open the input file. Program will terminate.")
  else:
    while f:
      inpt = f.readline()
      if inpt == '':
        break
      else:
        inLis.insert(0, inpt)
        inLis.insert(1, f.readline())
        inLis.insert(2, f.readline())
#      print(inLis[0])

    lst.append(inLis)
'''
#  f.close()
##############################
def main():
  arry = []
  inLis = []
  loadList(arry, inLis)
#  call load_list
  print("Unsorted list")
  for row in arry:
    for ele in row:
      print(ele)
  #call print_list
  #call sort_list
  print("Sorted list")
  print(arry[0][0])
  print(arry[0][1])
  print(arry[0][2])
  print(arry[0][3])
  print(arry[0][4])
  print(arry[0][5])
  #call print_list
  #print list max
  #print list min
  #call median
  #print median


##############################
main()
