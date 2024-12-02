# WindowGUI_019.py

from tkinter import *
from tkinter import messagebox
# 함수 선언
def clickMouse(event):
    txt = ""
    if event.num == 1:
        txt += "마우스 왼쪽 버튼이 ("
    elif event.num == 3:
        txt += "마우스 오른쪽 버튼이 ("
    txt += "x=" + str(event.x) + ", y=" + str(event.y) + ")위치에서 클릭됨"
    messagebox.showinfo("마우스 클릭된 좌표", txt)

# main
window = Tk()
window.title("마우스 좌표값 출력")
window.geometry("300x300")
label1 = Label(window, text = "윈도우 안에서 마우스를 클릭하세요")
window.bind("<Button>", clickMouse)
label1.pack(expand = 1, anchor = CENTER)
window.mainloop()
