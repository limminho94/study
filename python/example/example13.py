# 홀수, 짝수 판별하기
#
# 사용자로부터 입력받은 수를 2로 나누었을 때 나머지가 0이면 “짝수”, 나머지가 0이 아니면 “홀수”이다.
# 예를 들어 입력받은 수가 10이라면 2로 나누었을 때 나머지가 0이 된다. 따라서 10은 “짝수”가 된다. 만약 입력받은 수가 15라면 2로 나누었을 때 나머지가 1이 되어 0이 아니므로15는 “홀수”가 된다.

a = input()
if (int(a) % 2 == 0):
    print("짝수")
else :
    print("홀수")