# WindowGUI_017.py

from tkinter import *
from tkinter import messagebox

# 함수 선언
def clickleft(event):
    messagebox.showinfo("mouse event", "마우스 왼쪽 버튼 클릭 시 보여질 내용")

# main
window = Tk()
window.title("마우스 이벤트")
window.geometry("250x150")
label = Label(window, text = "마우스 왼쪽 버튼을 클릭하세요~")
label.place(x = 20, y = 30)

window.bind("<Button-1>", clickleft)
window.mainloop()

