# WindowGUI_023.py
from tkinter import *
from tkinter.filedialog import *

# 함수 선언
def func_open():
    filename = askopenfilename(parent=window,\
        filetype=(('gif file', '*.gif'), ('all file', '*.*')))
    photo = PhotoImage(file=filename)  # gif 파일만 가능함
    plabel.configure(image=photo)
    plabel.image = photo

def func_exit():
    window.quit()                      # 윈도우 창 종료
    window.destroy()

# main
window = Tk()
window.geometry('400x400')
window.title("파일을 열어서 이미지 보기")

photo = PhotoImage()
plabel = Label(window, image=photo)
plabel.pack(expand=1, anchor=CENTER)

mainMenu = Menu(window)       # 메인메뉴 객체 생성
window.config(menu=mainMenu)  # 메인메뉴를 윈도우에 배치
fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label='File', menu=fileMenu)
fileMenu.add_command(label='Open', command=func_open)
fileMenu.add_separator()      # 구분선
fileMenu.add_command(label='Exit', command=func_exit)

window.mainloop()
