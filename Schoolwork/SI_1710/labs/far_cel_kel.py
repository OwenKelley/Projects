#
# Owen Kelley
# Fharenheit Converter
#

far = float(0.00)
cel = float(0.00)
kel = float(0.00)
stopFar = float(0.00)
Fahrenheit = "Fahrenheit"
Celsius = "Celsius"
Kelvin = "Kelvin"

#USER INPUT
print("NOTE: Table will have max of 50 lines")
far = float(input("Enter the temperature fahrenheit (below 100,000):   "))

#Calculations
cel = (far - 32) / (1.8)
kel = cel + 273.15
stopFar = far + 51

#statement = f"| {Fahrenheit:^9.2}", f"| {Celsius:^9.2}", f"| {Kelvin:^9.2}", "|"

#NONLOOP
print(f"|{Fahrenheit:^9}", f"|{Celsius:^10}", f"|{Kelvin:^10}", "|")
print("|===================================|")
print("|    °F     |    °C     |     K     |")
print("|===================================|")

#LOOP
while(far <= 100000 and far != stopFar):
	cel = (far - 32) / (1.8)
	kel = cel + 273.15
	print(f"| {far:>9.2f}", f"| {cel:>9.2f}", f"| {kel:>9.2f}", "|")
	far = far + 1

