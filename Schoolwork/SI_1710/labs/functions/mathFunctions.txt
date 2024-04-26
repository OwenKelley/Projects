# Program using functions to calculate things

# math.sqrt(x), math.pow(b, e), math.radians(d), and math.pi
import math as m
#######################################################################
def distance(x1, y1, x2, y2):
   coord1 = 0.0  #squared value
   coord2 = 0.0 #squared value
   wosqrt = 0.0

   power1 = x2-x1
   coord1 = m.pow(power1,2)
#   print(coord1)
   power2 = y2 - y1
   coord2 = m.pow(power2,2)
#   print(coord2)
   wosqrt = coord1 + coord2
#   print(wosqrt)
   wosqrt = m.sqrt(wosqrt)


   return wosqrt
#######################################################################
def radius(xc, yc, xp, yp):
   radius = 0.0
   radius = distance(xc, yc, xp, yp)

   return radius
#######################################################################
def circumference(r):
   circumf = 0.0
   circumf = 2 * m.pi * r

   return circumf
#######################################################################
def area(r):
   area = 0.0
   area = m.pi * pow(r, 2)

   return area
#######################################################################
def arcLength(r, a):
   # a needs to be converted to radians
   a = a * m.pi /180
   s = r * a

   return s




