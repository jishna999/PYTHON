class Rectangle:
    def __init__(self, length, width):
        self.__length = length
        self.__width = width

    def area(self):
        return self.__length * self.__width

    def __lt__(self, other):
        return self.area() > other.area()

    l1 = int(input("enter the length of first rectangle:"))
    w1 = int(input("enter the width of first rectangle:"))
    rectangle1 = (l1, w1)
    l2 = int(input("enter the length of second rectangle:"))
    w2 = int(input("enter the width of second rectangle:"))
    rectangle2 = (l2, w2)
    if rectangle1 < rectangle2:
        print("area of rectangle 1 is smaller")
    else:
        print("area of rectangle 2 is smaler")
