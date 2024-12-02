# WindowGUI_009.py
from tkinter import *
# 함수 선언
def myFunction():
    if var1.get() == 1:
        label1.configure(text='Python')
    elif var1.get() == 2:
        label1.configure(text='Java')
    else:
        label1.configure(text='C++')
# 메인 코드
window = Tk()
window.geometry("200x150")
var1 = IntVar()     # 정수형 객체를 생성
radiobtn1 = Radiobutton(window, text="Python", variable = var1, value = 1, command = myFunction)
radiobtn2 = Radiobutton(window, text="Java", variable = var1, value = 2, command = myFunction)
radiobtn3 = Radiobutton(window, text="C++", variable = var1, value = 3, command = myFunction)
label1 = Label(window, text = "당신의 선택은 ? ", fg='red')
label1.pack(expand=1)
button1 = Button(window, text = 'close', command = quit)
radiobtn1.pack(expand=1)
radiobtn2.pack(expand=1)
radiobtn3.pack(expand=1)
button1.pack(expand=1)

window.mainloop()