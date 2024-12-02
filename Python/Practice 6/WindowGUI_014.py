# WindowGUI_014.py
from tkinter import *
# 전역변수 선언
btnlist = [""] * 9
fnlist = ['img1.gif','img2.gif','img3.gif','img4.gif','img5.gif',\
          'img6.gif','img7.gif','img8.gif','img9.gif']
photolist = [None] * 9
i, k = 0, 0
xpos, ypos = 0, 0   # 이미지 출력 좌표 위치값
num = 0             # 이미지의 순차 번호 0~8
# 메인 코드
window = Tk()
window.geometry("300x300")  # 100픽셀 x 100픽셀, 가로3개x 세로3개
for i in range(0,9):
    photolist[i] = PhotoImage(file = "image/" + fnlist[i])
    btnlist[i] = Button(window, image = photolist[i])
for i in range(0,3):
    for k in range(0,3):
        btnlist[num].place(x = xpos, y = ypos)
        num += 1
        xpos += 100
    xpos = 0
    ypos += 100
window.mainloop()

