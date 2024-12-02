# WindowGUI_021.py
from tkinter import *

window = Tk()
mainMenu = Menu(window)        #메인메뉴 객체 생성
window.config(menu = mainMenu) #메인메뉴를 윈도우에 배치

fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label = '파일', menu = fileMenu)
fileMenu.add_command(label = "open")
fileMenu.add_separator()  # 구분선
fileMenu.add_command(label = 'close')
window.mainloop()

