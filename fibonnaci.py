import math
n = int(input())
c1 = ((1+ math.sqrt(5))/2)
c2 = ((1- math.sqrt(5))/2)
cal1 =(math.pow(c1,n)) - (math.pow(c2,n))
calculo = float((cal1)/math.sqrt(5))
print("%.1f"%(calculo))
