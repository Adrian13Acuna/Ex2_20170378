import matplotlib.pyplot as plt
import numpy as np
import datefinder

# open the project schedule
path="D:/texto/logfalse.txt"
file = open(path,'r')

content = file.read()

# datefinder will find the dates for us
matches = list(datefinder.find_dates(content))

if len(matches) > 0:
    for date in matches:
        print(date)
else:
    print("Found no dates.")

file.close()

x = np.linspace(0, 10, 5)
y = np.array([0.0,2.5,5.5,7.5,10.0])

print(x)
print(y)