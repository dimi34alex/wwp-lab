"https://github.com/dimi34alex/wwp-lab"

'Task 1'
print('Введите размер файла:')
print("Размер в килобайтах: ", int(input())/1024)

'Task 2'
print('Введите два отрезка А и В')
a,b = int(input()), int(input())
c = int()
while a-b>= 0:
    a-= b;
    c += 1;
print('Количество отрезков В в А',c)

'task 3'
print('Введите два отрезка А и В')
a,b = int(input()), int(input())
a_copy = a
c = int()
while a-b>= 0:
    a-= b;
    c += 1;
print("Оставшееся место: ", a_copy-b*c)

'task 4'
print("Введите двузначное число")
a = input()
print(a[1]+a[0])

'task 4'
print("Введите трехзначное число")
a = input()
print(a[1]+a[2]+a[0])