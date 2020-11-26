string = input("문자부호를 입력하세요:")
num = int(input("정수를 입력하세요:"))
for i in range(1,num+1):
    for j in range(i):
        print(string,end="")
    print()
    