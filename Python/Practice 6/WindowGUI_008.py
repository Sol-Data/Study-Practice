# WindowGUI_008.py

from tkinter import *
from tkinter import messagebox

# 함수 선언
def myFunction():
    if check1.get() == 1:
        messagebox.showinfo(title="", message='체크를 했네요!')
    else:
        messagebox.showinfo(title="", message='체크를 해제 했군요~')
# 메인 코드
window = Tk()
window.geometry("200x150")
check1 = IntVar()     # 정수형 객체를 생성
cb1 = Checkbutton(window, text="click please~", variable = check1,\
                  command = myFunction)
cb1.pack(expand=1)

window.mainloop()
