
# Owen Kelley
# Calculates Leap Years

currentYear = 0
year = 0
leapYear = 0
oddYear = 0
weirdYear = 0
future = ""
future1 = ""
past = ""

currentYear = int(input("What is the current year:  "))

year = int(input("Enter year to see if it is a leap year:  "))

leapYear = year % 4
oddYear = year % 100
weirdYear = year % 400

if currentYear < year:
	future = "will"
	future1 = " be"
else:
	past = "was"
######################################
if year:
	if year < 1582:
		print("Error! ",year," was before the adoption of the Gregoian calender")
##END : BEFORE/AFTER GREGORIAN CALENDER

##START: DIVISIBLE BY 400 LEAP YEARS
	elif oddYear == 0:
    		if weirdYear == 0:
     			print(year," ",future,future1,past," a leap year")
    		else:
     			print(year," ",future,past," not",future1," a leap year")
	elif leapYear == 0:
    		print(year," ",future,future1,past," a leap year")
	else:
		print(year," ",future,past," not",future1," a leap year")
else:
	print("Year not properly defined")














