'Task 1'
print("Введите количество элементов")
n = int(input())
a = []
print("Введите элементы")
for i in range(n):
    a.append(int(input()))
print("Введите K и L")
k, l, = int(input()), int(input())
print("Среднее арефметическое с номерами от K до L включительно", sum(a[k:l+1])/len(a[k:l+1]))

'Task 2'
print("Введите количество элементов")
n = int(input())
a = []
print("Введите элементы")
for i in range(n):
    a.append(int(input()))
flag = True
d = a[1]-a[0]
for i in range(len(a)-1):
    if a[i+1]-a[i] != d:
        flag = False
if flag == True:
    print("Разность прогрессии", d)
else:
    print(0)
    
'Task 3'
print("Введите количество элементов")
n = int(input())
a = []
print("Введите элементы")
for i in range(n):
    a.append(int(input()))
mini = a[1]
for i in range(1, len(a), 2):
    if a[i] < mini:
        mini = a[i]
print("Минимальный элемент из его элементов с четными номерами:", mini)

'Task 4'
print("Введите количество элементов")
n = int(input())
a = []
print("Введите элементы")
for i in range(n):
    a.append(int(input()))
locmax = 0
for i in range(1, len(a)-1):
    if a[i-1] < a[i] > a[i+1]:
        locmax = i
print("Номер последнего локального максимума", locmax+1)

'Task 5'
print("Введите количество элементов")
n = int(input())
a = []
print("Введите элементы")
for i in range(n):
    a.append(int(input()))
for i in range(len(a)):
    for j in range(i+1,len(a)):
        if a[i] == a[j]:
            print("Номера элементов",i+1,j+1)