# WindowGUI_020.py

from tkinter import *
from tkinter import messagebox

# 함수 선언
def keyEvent(event):
    messagebox.showinfo("키보드 이벤트", "눌린 키 : " + chr(event.keycode))
    # event.keycode 키가 눌렸을 때, chr()함수로 눌려진 키 값을 문자로 변환
# main
window = Tk()
window.title("Key Event")
window.geometry("200x100")
window.bind("<Key>", keyEvent) # <Key> 이벤트를 윈도우창에서 사용
label1 = Label(window, text = "임의의 키를 누르세요")
label1.pack(expand = 1, anchor = CENTER)

window.mainloop()

