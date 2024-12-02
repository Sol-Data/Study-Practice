# WindowGUI_013.py

from tkinter import *

window = Tk()
btlist = [None] * 5

for i in range(0, 5):
    btlist[i] = Button(window, text = "button" + str(i+1))
for btn in btlist:
    btn.pack(side = LEFT, ipadx = 20)

window.mainloop()

