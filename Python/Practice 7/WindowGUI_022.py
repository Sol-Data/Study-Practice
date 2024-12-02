# WindowGUI_022.py
from tkinter import *
from tkinter import messagebox
# 함수 선언
def func_open():
    messagebox.showinfo("메뉴 선택", "Open 메뉴를 선택했습니다.")
def func_exit():
    window.quit()  # 윈도우 창 종료
    window.destroy()

# main
window = Tk()
mainMenu = Menu(window)  # 메인메뉴 객체 생성
window.config(menu=mainMenu)  # 메인메뉴를 윈도우에 배치

fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label='File', menu=fileMenu)
fileMenu.add_command(label='Open', command=func_open)
fileMenu.add_separator()  # 구분선
fileMenu.add_command(label='Exit', command=func_exit)
window.mainloop()
