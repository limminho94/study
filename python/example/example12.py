# 세 수 중 가장 큰 수 찾기(2)
#
# 사용자로부터 첫 번째 수를 입력받아 max에 저장한다. 두 번째로 입력받은 수 a와 max를 비교하여 a가 max보다 크면 max에 a를 저장한다. 세 번째 수도 마찬가지 방법으로 수행한다. 결국 가장 큰 수가 max에 저장된다.

max = input()
a = input()
if (int(a) > int(max)) :
      max = a
a = input()
if (int(a) > int(max)) :
      max = a
print(max)