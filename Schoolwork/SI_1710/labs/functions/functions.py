def main():
    angle = float(input("Enter an angle in degrees: "))
    r = degreesToRadians(angle)
    sine = calculateSine(r)
    print("The sine of angle", angle, "is", sine)

# Receives a value in degrees, converts and returns the
# equivalent radian value.
def degreesToRadians(x):
  x = x * 3.14159/180
  return x

# Receives a radian value and computes the sine of the value,
# calling the calculateFactorial function.
def calculateSine(x):
  final = 0.0
  count = 1 
  for i in range(0, 25, 1):
    final = final + ((-1)**i) * (pow(x,count)) / calculateFactorial(count)
    count = count + 2
  return final


# Receives an integer value, computes and returns the factorial
# of that value.
def calculateFactorial(fac):
  total = 1
  for fac in range(fac, 1, -1):
    total = total * fac
  return total

main()


