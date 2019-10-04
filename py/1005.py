#20191004 4주차 201907013 김솔

# string reversing

txt = 'aguS td'
print(txt[::-1])   #따로 변수 선언 없이 그냥 출력함


# string split

date = input('날짜를 입력 : (2019-09-09) : ')
year , month , day = date.split('-')   # '-'를 기준으로 문자열을 나눔
print('오늘은 {}년 {}월 {}일'.format(year,month,day))
text = '오늘은 {}년 {}월 {}일'.format(year,month,day)
print(text)


# in function

data = input('문장을 입력하세요 : ')
if 'a' in data :        # data 안에 a가 있냐
    print("a가 있음")
else :
    print("a가 없음")


# replace function

pw = 'My password is 1234'
print(pw)
pw0 = pw.replace('1','0')       #pw변수값 안에 1이란 문자열을 0으로 변경
print(pw0)
pw1 = pw.replace('1','taetae')  #pw변수값 안에 1이란 문자열을 taetae로 변경
print(pw1)


# eval function

mod = input('수식 입력 : ')
print('{} = {}'.format(mod,eval(mod)))'


# if-else test
# 두 정수 받아서 큰 수 출력 easy하죠

x , y = int(input('첫번째 수 :')) , int(input('두번째 수 : '))
if x > y :
    print('큰 수는 ',x,'입니다')
else :
    print('큰 수는 ',y,'입니다')


# id , pw sign up

id , pw = input('ID : ') , input('PW : ')
if len(id) < 10 :           #id의 길이가 10 미만이면 통과
    if len(pw) < 10 :       #pw의 길이가 10 미만이면 통과
        print("complete")
    else :
        print("fail : pw")  #pw의 길이가 10 이상일 경우 실패
else :
    print("fail id")        #id의 길이가 10 이상일 경우 실패


# id , pw login

orgId , orgPw = 'tae' , '951230'
id , pw = input('ID : ') , input('PW : ')
if id  == orgId :           #입력된 id와 원래 id가 일치하면 통과
    if pw == orgPw :        #입력된 pw와 원래 pw가 일치하면 통과
        print("complete")
    else :
        print("fail : pw")  #입력된 pw와 원래 pw가 불일치하면 실패
else :
    print("fail id")        #입력된 id와 원래 id가 불일치하면 실패


# if-elif-else

score = int(input('점수 :'))

if score >= 90 :
    print('A학점')
elif score >= 80 :
    print('B학점')
elif score >= 70 :
    print('C학점')
else :
    print('D학점')


# if-elif-else

age = int(input('나이 :'))

if age >= 20 :
    print('으른')
elif age >= 10 :
    print('미자')
else :
    print('아가')


#1

finger = int(input('손가락 둘레 :'))

if finger>51 and finger<=52 :
    print('9호')
elif finger>52 and finger<=53 :
    print('10호')
elif finger>53 and finger<=54 :
    print('11호')
elif finger>54 and finger<=55 :
    print('12호')
else :
    print('제작 불가')


#2

name , level = input('이름 :'),int(input('직급 :'))
if level == 1 :
    print(name,"부장님의 연봉은 9000만원입니다")
elif level == 2 :
    print(name,"과장님의 연봉은 6500만원입니다")
elif level == 3 :
    print(name,"대리님의 연봉은 4000만원입니다")
elif level == 4 :
    print(name,"사원님의 연봉은 3000만원입니다")
elif level == 5 :
    print(name,"인턴님의 연봉은 1000만원입니다")
else :
    print('지정된 직급이 입력되지 않았습니다.')


#3

height = int(input('키 :'))
if height <= 140 :
    print('6급 병역 면제')
elif height >= 141 and height <= 145 :
    print('5급 제2국민역')
elif height >= 146 and height <= 158 :
    print('4급 보충역')
else :
    print('현역')


#4

height = int(input('키 :'))
height = height / 100
weight = int(input('몸무게 :'))
bmi = weight / ( height*height)
if bmi >= 20 and bmi <=24.9:
    print('1급')
elif bmi >= 18.5 and bmi <=19.9:
    print('2급')
elif bmi >= 16 and bmi <=18.4 or bmi >= 30 and bmi <=34.9 :
    print('3급')
else :
    print('4급')


#5

sx = input('성별(남,여) :')
age = int(input('나이 :'))
age = age//10

if sx=='남' :
    print('적림금 2배')
else :
    if age < 2 :
        print('적립금 1.5배')
    elif age == 2 :
        print('적립금 2배')
    else :
        print('적립금 3배')


#6

x , y = int(input('첫번째 수 :')) , int(input('두번째 수 : '))
if x > y :
    print('큰 수는 ',x,'입니다')
    if x%2 == 0 :
        print('그리고 ',x,'는 짝수입니다')
    else :
        print('그리고 ',x,'는 홀수입니다')
else :
    print('큰 수는 ',y,'입니다')
    if y%2 == 0 :
        print('그리고 ',y,'는 짝수입니다')
    else :
        print('그리고 ',y,'는 홀수입니다')


#7

hak , avg = int(input('몇학기 :')) , float(input('학점 몇 :'))
if hak < 1 :
    print('장학금을 받을 수 없음')
elif hak >=1 and hak <=8:
    if avg >= 4.0 :
        print(' 전액 장학금')
    elif avg >= 3.5 :
        print(' 50% 장학금')
    elif avg >= 3.0 :
        print(' 30% 장학금')
    else :
        print('장학금을 받을 수 없음')
else :
    print('장학금을 받을 수 없음')


#8

x , y = int(input('첫번째 수 :')) , int(input('두번째 수 : '))
if x==7 and y==3 or x==3 and y==7 :
    print('둘 다 맞춤')
elif x==7 or y==7 :
    print('7을 맞춤')
elif x==3 or y==3 :
    print('3을 맞춤')
else :
    print('둘 다 틀림')


#9

x , y , z = int(input('첫번째 수 :')) , int(input('두번째 수 : ')) ,int(input('세번째 수 : '))
m= x;
sum = x+y+z
if sum%2==0 :
    if x > y :
        if x > z :
            m = x
        else :
            m= z
    else :
        if y > z :
            m = y
        else :
            m = z
    print(m)
else :
    print(sum)


#10

print("***유럽 여행 비행기 표 가격(편도)***")
print("* 여행 일정 : 1. 한달 전: 3% 2. 한달 반 전 : 5% 할인")
print("* 여행 국가 : 1. 영국 2. 프랑스 3. 독일 4. 그리스")
day=int(input("출국까지 남은 기간을 입력하세요(1 or 2): "))
world=int(input("여행 할 국가를 입력하세요: "))

if world==1 :
    if day==1 : 
        print("영국 비행기 표 가격은 3%할인되어서 67만 9천원입니다.")
    else: 
        print("영국 비행기 표 가격은 5%할인되어서 66만 5천원입니다.")
elif world==2 :
    if day==1 : 
        print("프랑스 비행기 표 가격은 3%할인되어서 64만 9천원 9백원입니다.")
    else: 
        print("프랑스 비행기 표 가격은 5%할인되어서 63만 6천원 5백원입니다.")
elif world==3 :
    if day==1 : 
        print("독일 비행기 표 가격은 3%할인되어서 61만 1천원 1백원입니다.")
    else: 
        print("독일 비행기 표 가격은 5%할인되어서 59만 8천원 5백원입니다.")
else :
    if day==1 : 
        print("그리스 비행기 표 가격은 3%퍼할인되어서 58만 2천원입니다.")
    else: 
        print("그리스 비행기 표 가격은 5%퍼할인되어서 57만원입니다.")
