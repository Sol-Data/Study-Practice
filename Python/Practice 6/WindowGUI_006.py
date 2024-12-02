# WindowGUI_006.py

from tkinter import *
window = Tk()

window.title("BUTTON TEST")
window.geometry("250x100")

# button 생성, 현재 창 닫기
button1 = Button(window, text = 'Close this window', fg='yellow', bg='brown',\
                 command = quit)
button1.pack()

window.mainloop()

