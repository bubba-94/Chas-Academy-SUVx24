from flask import Flask, render_template, request
from read.read_qr import qr_reader
from create.create_qr import qr_generator, img_path

app = Flask(__name__)

@app.route("/")
def home():
    return render_template("qr.html")

@app.route("/qr", methods=["POST"], strict_slashes=False)
def post_qr():
    return qr_generator()

@app.route("/qr", methods=["GET"], strict_slashes=False)
def get_qr():
    return qr_reader(img_path)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=8000)