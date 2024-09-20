import random

number = random.sample(range(0,9), 1)
number1 = random.sample(range(0,9), 1)
number2 = random.sample(range(0,9), 1)
num_ok = []
num_ok.append(number)
num_ok.append(number1)
num_ok.append(number2)
print(num_ok)
print("숫자야구게임시작")
print("난이도를 선택하세요 1.하 2.중 3.상")

num = int(input("선택번호:"))
user = []
if int(num) == 1:
    cnt = 1
    while(cnt <= 20):
        ch = int(input("첫번째 숫자 입력하세요"))
        ch1 = int(input("두번째 숫자 입력하세요"))
        ch2 = int(input("세번째 숫자 입력하세요"))
        user.append(ch)
        user.append(ch1)
        user.append(ch2)
        print("입력 숫자번호:",user)

        for i in range(0,9):
            print("i값:",i)
            print(num_ok)
            if num_ok[i] == int(user[0]) and num_ok[i] == int(user[1]) and num_ok[i] == int(user[2]):
                print("strike!")
            elif num_ok[i] != int(user[0]):
                print("ball")
            elif num_ok[i] != int(user[1]):
                print("ball")
            cnt += 1
            print(cnt)