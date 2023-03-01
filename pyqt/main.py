#https://realpython.com/python-pyqt-qthread/
#https://github.com/Givo29/pyqt5-threading/blob/master/main.py

import sys
import time
from PyQt5.QtWidgets import QApplication,QWidget,QCheckBox
from PyQt5.QtGui import QIcon
from PyQt5.QtCore import QThread, QThreadPool, QRunnable, QObject, pyqtSignal, pyqtSlot

class Signals(QObject):
    return_signal = pyqtSignal(str)

class Thread(QRunnable):
    #signal = pyqtSignal(str)

    def __init__(self):
        super(Thread,self).__init__()
        self.signal = Signals()

    @pyqtSlot() # decorator
    def run(self):
        time.sleep(3)
        text = "Hello World!"
        self.signal.return_signal.emit(text)

class App(QWidget):
    def __init__(self):
        super().__init__()
        self.title = "MyApp"
        self.left = 2100
        self.right = 500
        self.top = 500
        self.width = 640
        self.height = 480
        self.threadpool = QThreadPool()
        self.initUI()

    def initUI(self):
        self.setWindowTitle(self.title)
        self.setGeometry(self.left,self.top,self.width,self.height)
        checkbox = QCheckBox('Check Box',self)
        checkbox.stateChanged.connect(self.clickCheckBox)
        self.show()

    def clickCheckBox(self):
        thread = Thread()
        thread.signal.return_signal.connect(self.function_thread)
        self.threadpool.start(thread)

    def function_thread(self,signal):
        print(signal)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex=App()
    sys.exit(app.exec_())
