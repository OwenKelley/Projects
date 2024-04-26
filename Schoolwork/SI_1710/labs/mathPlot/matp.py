
import matplotlib.pyplot as plt

# Line Plot of Physical Activity
# X-Axis = Age
# Y-Axis = Activity
# Title = Exercise over the years
# tick mark labels & specify marker symbol

def exAge():
    x_coords = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
    y_coords = [0,0,2,5,8,9,9,9,7,7,7,7,7,8,8,10,6,4,4,6,6]

    plt.plot(x_coords, y_coords)
#    plt.show()
#Customize your graph! What do each of the following do?

    plt.title('Graph of Exercise in Relation To Age')
    plt.xlabel('Age (Years)')
    plt.ylabel('Exercise (Hours)')
    plt.grid(True)
    plt.xlim(xmin = 0, xmax = 20)
    plt.ylim(ymin = 0, ymax = 12)
    plt.plot(x_coords, y_coords, marker = '*')

    plt.show()
###############################################################
def major():
    Yax = [1,2,3,4,5]
    bar_width = 5
    values = [9,3, 5, 2, 1]
    plt.bar(Yax, values)
    plt.title('Distribution of Majors Among Friends')
    plt.xlabel('Majors')
    plt.ylabel('People')
    plt.xticks([1,2,3,4,5],
               ['CompSci','Engineer', 'Bio', 'Neuro', 'Physics'])
    plt.yticks([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
               ['0','1', '2', '3', '4', '5', '6', '7', '8', '9', '10'])

    plt.show()
###############################################################
# Pie Chart of Typical Weekday
# Sleeping, Eating, Studying, Going to Class, Socializing
def dailyPie():
# Create a list of sales amounts.
    sales = [7, 1, 4, 6, 2, 4]
    
# Create a list of labels for the slices.
    slice_labels = ['Sleeping', 'Eating', 'Studying', 'Classes', 'Socializing', 'Other']
    
# Create a pie chart from the values.
    plt.pie(sales, labels=slice_labels)
# Add a title.
    plt.title('Hours of Activity Daily')
    
# Display the pie chart.
    plt.show()
###############################################################
exAge()
major()
dailyPie()
