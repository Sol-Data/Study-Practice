# WindowGUI_010.py
from tkinter import *

window = Tk()
window.geometry("640x400")
window.resizable(True, True)
window.title("Text 컨트롤 사용하기")

text = Text(window)
text.insert(CURRENT, "안녕하세요.\n") # CURRENT는 커서의 현재 위치를 가리킴
text.insert(CURRENT, "반갑습니다.")
text.insert(2.0, "매우 ")    # 2.0 은 2번째 줄 첫번째 문자 위치를 가리킴

text.pack()

text.tag_add("강조", "1.0", "1.6")
text.tag_config("강조", background="light green")
text.tag_remove("강조", "1.1", "1.2")

window.mainloop()

