# 최댓값 구하기
# max 값과 새롭게 입력받은 a 값을 비교하여 큰 값을 max에 저장하는 동작을 반복하며 최댓값을 구한다.

# 예제31
a = int(input("정수:"))
max = a
for i in range(1,6):
        a = int(input("정수:"))
        if  max > a :
            max
        else :
            max = a

print("최댓값:",max)