'task 1'
print('Введите количество элементов')
n, a = int(input()), list()
print('Введите элементы')
for i in range(n):
    a.append(int(input()))
pred = a[0]
k = int()
pos = list()
outK, outPos = list(),list()
for i in range(len(a)):
    j = i
    k = 1
    pos = list()
    pos.append(a[i])
    if j != len(a)-1:
        while a[j+1] - a[j] == 1:
            k += 1
            pos.append(a[j+1])
            j += 1
            if j == len(a)-1:
                break
    outK.append(k)
    outPos.append(pos)
print(outK, outPos)

'task 2'
print('Введите количество элементов')
n, a = int(input()), list()
print('Введите элементы')
for i in range(n):
    a.append(int(input()))
print('Введите L')
l = int(input())
pred = a[0]
k = int()
pos = list()
outK, outPos = list(),list()
for i in range(len(a)):
    j = i
    k = 1
    pos = list()
    pos.append(a[i])
    if j != len(a)-1:
        while a[j+1] - a[j] == 1:
            k += 1
            pos.append(a[j+1])
            j += 1
            if j == len(a)-1:
                break
    outK.append(k)
    outPos.append(pos)
print(outK, outPos)

for i in outK:
    if i > l:
        outPos[outK.index(i)] = 0
print(outPos)


'task 3'
print('Введите количество элементов')
n, a = int(input()), list()
print('Введите элементы')
for i in range(n):
    a.append(int(input()))
print('Введите K, считая от нуля')
K = int(input())
pred = a[0]
k = int()
pos = list()
outK, outPos = list(),list()
for i in range(len(a)):
    j = i
    k = 1
    pos = list()
    pos.append(a[i])
    if j != len(a)-1:
        while a[j+1] - a[j] == 1:
            k += 1
            pos.append(a[j+1])
            j += 1
            if j == len(a)-1:
                break
    outK.append(k)
    outPos.append(pos)
print(outK, outPos)

temp = outPos[-1]
outPos[-1] = outPos[K]
outPos[K] = temp
print(outPos)

'task 4'
import math
print('Введите количество точек')
n = int(input())
print('Введите х и у этих точек')
a = list()
rass = list()
for i in range(n):
    temp = list()
    temp.append(int(input()))
    temp.append(int(input()))
    a.append(temp)
for i in range(len(a)):
    if a[i][0] < 0:
        rass.append(math.sqrt(a[i][0]**2+a[i][1]**2))
if len(rass) != 0:
    print(a[rass.index(max(rass))])
else:
    print(0,0)

'task 5'
import math
print('Введите количество точек')
n = int(input())
print('Введите х и у этих точек')
points,x,y = list(),list(),list()
Ps = list()
P = list()
for i in range(n):
    x.append(int(input()))
    y.append(int(input()))
for i1 in range(len(x)):
    for i2 in range(i1+1, len(x)):
        for i3 in range(i2+1, len(x)):
            a = math.sqrt((x[i1]-x[i2])**2+(y[i1]-y[i2])**2)
            b = math.sqrt((x[i2]-x[i3])**2+(y[i2]-y[i3])**2)
            c = math.sqrt((x[i1]-x[i3])**2+(y[i1]-y[i3])**2)
            points = [x[i1],y[i1],x[i2],y[i2],x[i3],y[i3]]
            P.append(points)
            Ps.append(a+b+c)
print(max(Ps), P[Ps.index(max(Ps))])