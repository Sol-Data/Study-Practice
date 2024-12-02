# WindowGUI_018.py

from tkinter import *
from tkinter import messagebox

# 함수 선언
def clickImage(event):
    messagebox.showinfo("mouse event", "이미지를 클릭했습니다.")

# main
window = Tk()
window.title("마우스 이벤트")
window.geometry("250x300")

pho = PhotoImage(file = "image/pic3.gif")
label = Label(window, image = pho)
label.bind("<Button>", clickImage)

label.pack(anchor = CENTER)
window.mainloop()

