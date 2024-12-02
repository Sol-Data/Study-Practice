# WindowGUI_025.py
from tkinter import *
import tkinter.messagebox

# 함수 선언
def Msgbox1():
    tkinter.messagebox.showinfo("정보",\
        "정보를 알려주는 용도의 메시지 상자\n(파랑색 i 아이콘)")
def Msgbox2():
    tkinter.messagebox.showwarning("경고",\
        "경고를 알려주는 용도의 메시지 상자\n(노랑색 느낌표 아이콘)")
def Msgbox3():
    tkinter.messagebox.showerror("오류",\
        "오류를 알려주는 용도의 메시지 상자\n(빨강색 X 아이콘)")
def Msgbox4():
    tkinter.messagebox.askquestion("질문",\
        "질문을 할때 쓰는 추가 옵션용 메시지 상자\n(파랑색 물음표 아이콘)")
def Msgbox5():
    tkinter.messagebox.askokcancel("확인/취소",\
        "확인(Ok)과 취소(Cancel) 중 선택\n(파랑색 물음표 아이콘)")
def Msgbox6():
    tkinter.messagebox.askyesnocancel("예/아니오/취소",\
        "예(Yes), 아니오(No), 취소(Cancel) 중 선택\n(파랑색 물음표 아이콘)")
def Msgbox7():
    tkinter.messagebox.askretrycancel("다시시도/취소",\
        "다시 시도할지, 취소할지를 묻는 메시지 상자\n(노랑색 느낌표 아이콘)")
def close_win():
    win.destroy()
    win.quit()

# main
win = Tk()
win.title("메시지박스")
# 프레임 영역
base_frm = Frame(win)
base_frm.pack()
# 버튼 영역
btn_info=Button(base_frm, text="Info", width="20", command=Msgbox1)
btn_info.pack(padx="50", pady="10")
btn_warning=Button(base_frm, text="Warning", width="20", command=Msgbox2)
btn_warning.pack(pady="10")
btn_error=Button(base_frm, text="Error", width="20", command=Msgbox3)
btn_error.pack(pady="10")
btn_ask_question=Button(base_frm, text="Question", width="20", command=Msgbox4)
btn_ask_question.pack(pady="10")
btn_ask_cancel=Button(base_frm, text="Ok/Cancel", width="20", command=Msgbox5)
btn_ask_cancel.pack(pady="10")
btn_ask_YNC=Button(base_frm, text="Yes/No/Cancel", width="20", command=Msgbox6)
btn_ask_YNC.pack(pady="10")
btn_ask_try=Button(base_frm, text="Try", width="20", command=Msgbox7)
btn_ask_try.pack(pady="10")
btn_cls=Button(base_frm, text="Close", width="20", command=close_win)
btn_cls.pack(pady="10")

win.mainloop()

