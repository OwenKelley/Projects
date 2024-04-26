
#  OWEN KELLEY
#  VALUE COMPUTER

def geometric():
  i = 0.0
  total = 0.0
  runs = int(input("Enter number of terms you would like to add:  "))
  denom = 2
  while i < runs:
    total = total + (1/denom)
    denom = 2 * denom
    i = i+1

  print("How many terms?   ", runs)
  print("The sum is?   ", total)
###################################################################### 
#def factorial():
#  sfac = int(input("Enter number to be factorial-ed:  "))
#  fac = sfac
#  total = 1
#  for fac in range(fac, 1, -1):
#    total = total * fac

#  print("Compute the factorial of:  ", sfac)
#  print(sfac,"! = ", total)
######################################################################
def factorial(num):
  sfac = num
  fac = sfac
  total = 1
  for fac in range(fac, 1, -1):
    total = total * fac
  return num
######################################################################
def sinF(startingInput):
#  startingInput = int(input("Enter value in degrees"))
  x = startingInput * 3.14159 / 180
  sum = 0
  count = 1
  for t in range(25):
    fact = 1
    for f in range(1, count+1):
      fact = fact * f
    sum = sum + (-1)**(t)*pow(x,count)/fact
    count = count + 2
#  print("sin(",startingInput,") = ", sum)
  return sum
###################################################
def mySin(startDegrees):
  final = 0.0
  x = startDegrees
  x = x * 3.14159/180
  count = 1
#  print("X = ", x)
#  for i in range(1, 26, 1):
  for i in range(0, 25, 1):
    fact = 1
    for f in range(1, count+1):
      fact = fact * f
    final = final + ((-1)**i) * (pow(x,count)) / fact
#    final = final + (-1 ** i) * (pow(x,count)) / fact
    count = count + 2
#  print("sin(",startDegrees,") = ", final)
  return final



#    final = final + ((pow(x, i) / factorial(i)) - (pow(x, i+2) / factorial(i+2)))








#  plus = True
#  for i in range(1,101,2):
#     if plus == True:
#        final = final + (((x**i)) / factorial(i))
#        final = final + ((x**i) / factorial(i))
#        plus = False
#     else:
#        final = final - ((x**i) / factorial(i))
#        plus = True
#  final = final * (180/3.14159)






#  return final
######################################################################
def sinAngle():
  sfac = int(input("Enter **Angle** for sin of x:  "))
  pi = 3.14159
  
######################################################################
geometric()
factorial(5)
print("SIN of 30 ", sinF(30))
print("MYSIN of 30", mySin(30))
#print(sinF(0))
#print(sinF(30))
#print(sinF(45))
print("SIN OF 90 ", sinF(90))
#print(sinF(120))
#print(sinF(220))







