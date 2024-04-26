# Owen Kelley
# SI 1710

def main():
  i=0
  counter=0
  arry = ["Array"] 
#  inputFile = str(input("Enter the name of the file:  "))
  inputFile = "absences.txt"
  f = open(inputFile, 'r');

  name = str(input("Enter the first and last name of the student:  "))
  out=name
  name = name+"\n"
  while f and i < 100:
#  while i != EOF:
     cin = f.readline()
     if cin == '':
       break
     if cin == name:
       counter=counter+1
     i=i+1
  counter=str(counter)
  print(out + ": #" + counter)
  x='''
  i=0
  j=0
  count=0
  length = len(arry)
  while i<length:
    print(i)
    if name == arry[i]:
      print("SAME NAME FOUND")
      count = count+1
      print(count)
    i=i+1

  count = str(count)
  print(name + ": #" + count)


  i=0
  print(name)
  print(arry[i])
'''
  f.close()


main()
