# WindowGUI_026.py, 슬라이드 앨범

from tkinter import *

# 전역변수 선언
fnlist = ['pic1.gif','pic2.gif','pic3.gif','pic4.gif','pic5.gif',\
          'pic6.gif','pic7.gif','pic8.gif','pic9.gif']
photolist = [None] * 9
num = 0

#함수 선언
def clicknext() :
    global num
    num += 1
    if num > 8 :
        num = 0
    photo = PhotoImage(file = "image/" + fnlist[num])
    plabel.configure(image = photo)
    plabel.image = photo

def clickprev() :
    global num
    num -= 1
    if num < 0:
        num = 8
    photo = PhotoImage(file="image/" + fnlist[num])
    plabel.configure(image=photo)
    plabel.image = photo

# main
window = Tk()
window.title("이미지 보기")
window.geometry("294x490")
btnprev = Button(window, text = "<< 이전", command = clickprev)
btnnext = Button(window, text = "다음 >>", command = clicknext)

photo = PhotoImage(file = "image/" + fnlist[0])
plabel = Label(window, image = photo)

btnprev.place(x=70, y=20)
btnnext.place(x=180, y=20)
plabel.place(x = 20, y=70)
window.mainloop()

