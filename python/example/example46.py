# 선형 탐색 알고리즘
# 임의의 숫자를 10개를 요소로 가지는 리스트를 만들고, 키 값을 입력했을 때 인덱스를 찾아 출력하는 선형 탐색 알고리즘을 구현하라

# 예제46
a = [26,27,39,63,57,75,11,76,80,18]
num = int(input("키:"))
cnt = 0
for i in range(0, 10):
    if a[i] == num:
        print(cnt,"에서 탐색 성공")
        break
    elif a[i] != num:
        cnt = cnt + 1
else :
    print("탐색실패")