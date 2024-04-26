# 
#  Owen Kelley
#  Student Instructor
#  csc-1710
#  10/17/2022
#

imageType = "" 
comment = ""
red = 0.0 
green = 0.0 
blue = 0.0
r = 0.0
g = 0.0
b = 0.0
gray = 0.0
width = 0
height = 0 
maxx = 0
i=0
x=0
#  Open Files  ##############################################################
inputFile = str(input("Enter the name of the file:  "))
f = open(inputFile, 'r');
out = open("OUTPUT.ppm", 'w')
if not f:
  print("Cannot open the input file. Program will terminate.")
#   Write Headings  #########################################################
else:
  imageType = f.readline()
  comment = f.readline()
  width = f.readline()
# height is on the same line as width
  maxx = f.readline()

  out.write("P2\n")
  out.write(comment + "\n")
  out.write(width + "\n")
  out.write(maxx + "\n")
#  Loop to input data #######################################################
               #  x = width.split()
# The code noted out under this line is what they are supposed to have, I did it differently
# width, height = (int(i) for i width.split())

#  width, height = (int(x) for x in width.split())


#  width = x[0]
#  height = x[1]


#  EOF = float(width) * float(height)
  while f:
#  while i != EOF:
     red = f.readline()
     if red == '':
       break
     green = f.readline()
     blue = f.readline()

     red = float(red)
     green = float(green)
     blue = float(blue) 
#     print("Red: ", red,"Green: ", green,"Blue: ", blue)

     gray = (red*0.3) + (green*0.6) + (blue*0.1)
     gray = str(gray)
     out.write(gray + "\n") 

 
     i = i+1

# CLOSE FILES
  f.close()
  out.close()

