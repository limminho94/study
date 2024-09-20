# 10진수를 2진수로 변환하여 리스트에 저장하기 (필수)
# 10진수를 입력받아, 2진수로 출력하는 프로그램을 개발하세요.

# 예제44
num = int(input("10진수:"))
a = []
while num != 0:
    a.append(num%2)
    num = num // 2
b = len(a)
print(b)
for i in range(b-1, -1, -1):
    print(a[i],end=" ")