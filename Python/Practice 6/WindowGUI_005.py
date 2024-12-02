# WindowGUI_005.py

from tkinter import *
window = Tk()

window.title("이미지 삽입")
window.geometry("467x300")
window.resizable(width=True, height=False)

# 이미지 삽입은 gif 형식 파일만 지원함
photo1 = PhotoImage(file='daVinci_MonaLisa.gif')
label1 = Label(window, image = photo1)

photo2 = PhotoImage(file='Botero_MonaLisa.gif')
label2 = Label(window, image = photo2)

label1.pack(side=LEFT)
label2.pack(side=LEFT)
window.mainloop()

