# WindowGUI_004.py

from tkinter import *
window = Tk()

window.title("이미지 삽입")
window.geometry("200x300")
window.resizable(width=True, height=True)
# 이미지 삽입은 gif 형식 파일만 지원함
photo = PhotoImage(file='daVinci_MonaLisa.gif')
label1 = Label(window, image = photo)
label1.pack()

window.mainloop()

