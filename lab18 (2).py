'Task 1'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
print("Введите элементы массива б")
for i in range(n):
    b.append(int(input()))
for i in range(n):
    temp = b[i]
    b[i] = a[i]
    a[i] = temp
print("A:", a)
print("B:",b)

'Task 2'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
a.append(0)
print("Введите k, считая от нуля")
k = int(input())
b = [0]*n
b[k] = sum(a[1:k+1])/len(a[1:k+1])
print(b)

'Task 3'
print("Введите количество элементов массива")
n = int(input())
a = []
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
kof = a[-2]
for i in range(len(a)):
    if a[i] % 2 != 0:
        a[i] += kof
print(a)

'Task 4'
print("Введите количество элементов массива")
n = int(input())
a = []
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
step1 = a.index(max(a))
step2 = a.index(min(a))
if step1 < step2:
    for i in range(step1+1,step2):
        a[i] = 0
else:
    for i in range(step2+1, step1):
        a[i] = 0
print(a)

'Task 5'
print("Введите количество элементов массива")
n = int(input())
a = []
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
a.sort()
print(a)