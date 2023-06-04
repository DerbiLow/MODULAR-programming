import math
import time
e = 2.71823
x = [0,0,0,0,0]
y = [0,0,0,0,0]
t0 = time.time()
for  i in range (0,5):
    x[i] = input ("Введите Х = ")
    x[i] = int (x[i])
    y[i] = abs(math.cos(x[i]) + math.sin(x[i]))
    y[i] = math.log(y[i],e)
    print (f"X",i," = ", x[i])
    print (f"Y",i," = ", y[i])

t1 = time.time()
print(f"Время выполнения программы = ", t1 - t0, " секунд")
