import time
import ctypes
x = [0.0,0.0,0.0,0.0,0.0]
y = [0.0,0.0,0.0,0.0,0.0]

t0 = time.time()
lib = ctypes.CDLL('./DLL4.dll')
for i in range (0,5):

     x[i] = input ("input X = ")
     x[i] = int (x[i])
     y[i] = lib.sum(x[i])
     print (f"X ", i, " = ", x[i])
     print(f"Y ", i, " = ", y[i])
 
t1 = time.time()
print (f"Time work = ", t1-t0, " seconds")