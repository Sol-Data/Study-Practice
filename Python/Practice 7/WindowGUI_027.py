# WindowGUI_0027.py, 고객정보 입력 화면

from tkinter import *
from tkinter.ttk import *

class MyFrame(Frame):
    def __init__(self, master):
        Frame.__init__(self, master)

        self.master = master
        self.master.title("Information")
        self.pack(fill=BOTH, expand=True)

        # 이름
        frame1 = Frame(self)
        frame1.pack(fill=X)

        lblName = Label(frame1, text="Name", width=10)
        lblName.pack(side=LEFT, padx=10, pady=10)

        entryName = Entry(frame1)
        entryName.pack(fill=X, padx=10, expand=True)

        # 회사명
        frame2 = Frame(self)
        frame2.pack(fill=X)

        lblComp = Label(frame2, text="Company", width=10)
        lblComp.pack(side=LEFT, padx=10, pady=10)

        entryComp = Entry(frame2)
        entryComp.pack(fill=X, padx=10, expand=True)

        # 특징
        frame3 = Frame(self)
        frame3.pack(fill=BOTH, expand=True)

        lblComment = Label(frame3, text="Special feature", width=10)
        lblComment.pack(side=LEFT, padx=10, pady=10)

        entryComment = Text(frame3)
        entryComment.pack(fill=X, padx=10, expand=True)

        # 저장 버튼
        frame4 = Frame(self)
        frame4.pack(fill=X)
        btnSave = Button(frame4, text="Save")
        btnSave.pack(side=LEFT, padx=10, pady=10)

def main():
    window = Tk()
    window.geometry("600x550+100+100")
    app = MyFrame(window)
    window.mainloop()

if __name__ == '__main__':
    main()

