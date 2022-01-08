(a)
list = [-5, 10, 0, -14, 18, 17]
print(list)
newlist = [x for x in list if x > 0]
print("the positive numbers are:", newlist)

(b)
n = int(input("enter the number of numbers:"))
list1 = []
for i in range(n):
    a = int(input("enter the number:"))
    list1.append(a)
print(list1)
list2 = [x ** 2 for x in list1]
print(list2)

(c)
word = input("enter a word:")
vowels = [x for x in word if x in ['a', 'e', 'i', 'o', 'u']]
print("the vowels in thw words are:", vowels)

(d)
w = input("enter a word:")
ord = [ord(x) for x in w]
print("the ordinal value is:", ord)
