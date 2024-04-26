import mathFunctions as mth

x1 = float(input("Enter X Coordiate for start of distance function:  "))
y1 = float(input("Enter Y Coordiate for start of distance function:  "))
x2 = float(input("Enter X Coordiate for end of distance function:  "))
y2 = float(input("Enter Y Coordiate for end of distance function:  "))

dis = mth.distance(x1,y1,x2,y2)
print("Distance = ", dis)
##################################################################################
x1 = float(input("Enter X Coordiate for start of radius function:  "))
y1 = float(input("Enter Y Coordiate for start of radius function:  "))
x2 = float(input("Enter X Coordiate for end of radius function:  "))
y2 = float(input("Enter Y Coordiate for end of radius function:  "))

rad = mth.radius(x1, y1, x2, y2)
print("Radius = ", rad)
##################################################################################
rad = float(input("Enter the radius of the circle:  "))
cir = mth.circumference(rad)
print("Circumference = ", cir)
##################################################################################
rad = float(input("Enter the radius of the circle:  "))

are = mth.area(rad)
print("Area = ", are)
##################################################################################
rad = float(input("Enter the radius of the circle:  "))
angle = float(input("Enter the angle in degrees:  "))
arcL = mth.arcLength(rad, angle)
print("Arc Length = ", arcL)

