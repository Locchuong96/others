from PyQt5.QtWidgets import QApplication,QWidget
import sys

# Only need one (and only one) QApplication instance per application
# Pass in sys.argv to allow command line arguments for your application
# If you know you will not use command line arguments QApplication([]) works todo
app = QApplication(sys.argv)

#Create a Qt Widget, which will be our window
window = QWidget()
window.show() # important! windows are hidden by default

# Start the event loop
app.exec_()

# Your application won't reach her until you exit and the event loop stopped
print('app closed.')
