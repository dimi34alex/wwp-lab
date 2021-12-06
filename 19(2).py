'task 1'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))

for i in range(n-1):
    if a[i] == a[i+1]:
        a[i] = 'toRemove'
while a.count('toRemove') > 0:
    a.remove('toRemove')
print(a)

'task 2'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))

for i in a:
    if a.count(i) == 2:
        a.remove(i)
        a.remove(i)
print("Длина", len(a), a)

'task 3'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
mini = min(a)
maxi = max(a)
a.insert(a.index(mini), 0)
a.insert(a.index(maxi)+1, 0)
print(a)

'task 4'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
    if a[-1] < 0:
        a.append(0)
print(a)
'task 5'
print("Введите количество элементов массива")
n = int(input())
a,b = [],[]
print("Введите элементы массива а")
for i in range(n):
    a.append(int(input()))
    if a[-1] > 0:
        a.append(0)
        temp = a[-2]
        a[-2] = a[-1]
        a[-1] = temp
print(a)