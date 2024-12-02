# WindowGUI_002.py

from tkinter import *  # GUI 관련 모듈을 제공해주는 표준 윈도우 라이브러리
window = Tk()          # Root window

window.title("윈도우 창 제목")
window.geometry("300x300")             # 창의 가로x세로 크기
window.resizable(width=False, height=False) # 창의 크기 고정

window.mainloop()     # 이벤트 메시지 루프 (mainloop()) 호출

