# WindowGUI_003.py

from tkinter import *

window = Tk()

window.title("윈도우 창 제목")
window.geometry("480x150")
window.resizable(width=False, height=False)
# label 생성
label1 = Label(window, text = "window 내부에 나타내는 문자열")
label1.pack()
# fg = '글자의 전경색'
label2 = Label(window, text = "폰트 및 폰트 색상 지정",\
               font =("나눔고딕", 24), fg = 'blue')
label2.pack()
# bg = '글자의 배경색' anchor = N NE E SE S SW W NW CENTER 가운데 하나 지정
label3 = Label(window,\
               text = "문단의 배경 색상, 크기, 문단 안의 글자 위치 지정",\
               bg = 'yellow', width=50, height='3', anchor=SW)
label3.pack()

window.mainloop()       # 이벤트 메시지 루프 (mainloop()) 호출

