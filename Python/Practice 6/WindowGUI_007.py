# WindowGUI_007.py

from tkinter import *
from tkinter import messagebox

# 함수 선언
def myFunc():
    messagebox.showinfo(title="그림 설명", message='Fernando Botero의 모나리자')
    
window = Tk()
window.title("명화 감상")
photo = PhotoImage(file='Botero_MonaLisa.gif')
button1 = Button(window, image = photo, command = myFunc) 
button2 = Button(window, text = 'View Text', command = myFunc) 
button3 = Button(window, text = 'Close', command = quit)  
button1.pack()
button2.pack()
button3.pack()

window.mainloop()

