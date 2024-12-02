# WindowGUI_028.py, 좋아하는 스타 투표하기

from tkinter import *
# 함수 선언
def myFunc():
    if var.get() == 1:
        labelImage.configure(image = photo1)
    elif var.get() == 2:
        labelImage.configure(image = photo2)
    else:
        labelImage.configure(image=photo3)
# 전역변수 선언
var, labelImage = 0, None
photo1, photo2, photo3 = [None] * 3

# main
if __name__ == "__main__":
    window = Tk()
    window.geometry("400x450")
    window.title("좋아하는 스타 투표하기")
    labelTxt = Label(window, text = "좋아하는 스타는?", fg='green',\
                     font=('나눔고딕', 20))
    var = IntVar()
    rb1 = Radiobutton(window, text="블랙핑크", variable = var, value=1)
    rb2 = Radiobutton(window, text="방탄소년단", variable=var, value=2)
    rb3 = Radiobutton(window, text="트와이스", variable=var, value=3)
    btnOK = Button(window, text = "사진 보기", command = myFunc)

    photo1 = PhotoImage(file='image/photo1.gif')
    photo2 = PhotoImage(file='image/photo2.gif')
    photo3 = PhotoImage(file='image/photo3.gif')

    labelImage = Label(window, width=250, height=250, bg='white', Image=None)

    labelTxt.pack(padx=5, pady=5)
    rb1.pack(padx=5, pady=5)
    rb2.pack(padx=5, pady=5)
    rb3.pack(padx=5, pady=5)
    btnOK.pack(padx=5, pady=5)
    labelImage.pack(padx=5, pady=5)
window.mainloop()

