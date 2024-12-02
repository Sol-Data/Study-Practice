# WindowGUI_011.py
from tkinter import *
window = Tk()
window.title("Button 배치")
window.geometry("200x300")
bt1 = Button(window, text = '버튼1')
bt2 = Button(window, text = '버튼2')
bt3 = Button(window, text = '버튼3')
bt1.pack(side = TOP, fill = X)
bt2.pack(side = BOTTOM, padx = 10, ipady = 20)
bt3.pack(side = RIGHT, ipadx = 10, pady = 10)
window.mainloop()

