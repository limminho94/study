# 나이에 따른 공원입장료
#
# 나이에 따른 공원 입장료는 다음과 같다.
# 입력 받은 나이가 8미만이거나 60세 이상이면 “무료”를 출력하고, 그렇지 않으면 “5000원”을 출력한다.

age = input()
if ( int(age) < 8 or int(age) >= 60 ):
      print("무료")
else :
      print("5000원")