import os
from flask import Flask
from flask import redirect,url_for,render_template,request,flash

app = Flask(__name__)

color = os.environ.get('APP_COLOR') #color = 'red'

@app.route("/", methods = ["GET","POST"])
def home():
	print(f"your color is {color}")
	return render_template('home.html',color = color)

if __name__ == "__main__":
   app.run(port = 5000, host = "0.0.0.0",debug = True)
