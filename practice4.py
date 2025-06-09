a = int(input("value of A : "))
b = int(input("value of B : "))
c = int(input("value of C : "))


if a > b:
    if a > c:
        print(a, "is the biggest value")
    else:
        print(c, "is the biggest value")
else:
    if b > c:
        print(b, "is the biggest value")
    else:
        print(c, "is the biggest value")
