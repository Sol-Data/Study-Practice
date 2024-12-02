# WindowGUI_024.py

from tkinter import *
import tkinter.messagebox
# 함수 선언
def Msgbox1():
    tkinter.messagebox.showinfo("파란 i",\
        "정보를 알려주는 용도의 메시지 상자\n(파란 느낌표 아이콘)")
def close_win():
    win.destroy()
    win.quit()

# main
win = Tk()
win.title("확인/취소 버튼 세트")
# 프레임 영역
base_frm = Frame(win)
base_frm.pack()
# 버튼 영역
btn_info = Button(base_frm, text = "info", width = "20", command = Msgbox1)
btn_info.pack(padx = "50", pady = "10")
win.mainloop()
