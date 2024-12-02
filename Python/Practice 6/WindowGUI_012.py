# WindowGUI_012.py

from tkinter import *
window = Tk()
window.title("Button 배치")
window.geometry("200x300")
bt1 = Button(window, text = '버튼1')
bt2 = Button(window, text = '버튼2')
bt3 = Button(window, text = '버튼3')

bt1.pack(side = TOP, fill = X, padx = 10, pady = 10)
# bt1.pack(side = TOP, fill = X, ipadx = 10, ipady = 10)
# bt1.pack(side = TOP, fill = X, ipadx = 10, ipady = 10, padx = 10, pady = 10)

bt2.pack(side = TOP, fill = X, padx = 10, pady = 10)
bt3.pack(side = TOP, fill = X, padx = 10, pady = 10)
window.mainloop()

