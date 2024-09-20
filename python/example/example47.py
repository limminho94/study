# 이진 탐색 알고리즘
# 임의의 숫자를 10개를 요소 또는 예시(a = [11, 18, 26, 27, 39, 57, 63, 75, 76, 80])와 같은 리스트를 만들고, 키 값을 입력했을 때 인덱스를 찾아 출력하는이진 탐색 알고리즘을 구현하세요.

# 예제47
a = [11,18,26,27,39,57,63,75,76,80]
num = int(input("키:"))
low = 0
high = 9
while low <= high:
    mid = (low+high)//2
    if a[mid] == num:
        print(mid,"에서 탐색 성공")
        break
    elif a[mid] < num:
        low = mid + 1
    elif a[mid] > num:
        high = mid - 1
else :
    print("탐색 실패")