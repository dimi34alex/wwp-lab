
'Задача 1'
import math
print('Введите а в градусах')
angle = float(input())
print('a в радианах:', angle*math.pi/180)

'Задача 2'
import math
print('Введите а в радианах')
angle = float(input())
print('a в градусах:', angle*180/math.pi)

'Задание 3'
print("Введите x, a, y:")
x,a,y = int(input()),int(input()),int(input())
print(a/x*y)

'Задание 4'
print("Введите v1,v2,s,t:")
v1,v2,s,t = int(input()),int(input()),int(input()),int(input())
print((v1+v2)*t+s)

'Задание 5'
print("Введите a,b в уравнение A*x + B = 0:")
a,b = int(input()),int(input())
print(-(b/a))

'Задание 6'
print("Введите a1,b1,c1:")
a1,b1,c1 = int(input()),int(input()),int(input())
print("Введите a2,b2,c2:")
a2,b2,c2 = int(input()),int(input()),int(input())
delta = a1*b2-b1*a2
delta1 = c1*b2-b1*c2
delta2 = a1*c2-c1*a2
print(delta1/delta,delta2/delta)


