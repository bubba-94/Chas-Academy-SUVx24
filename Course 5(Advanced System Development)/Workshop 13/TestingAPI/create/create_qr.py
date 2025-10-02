import qrcode
import os

# Path to root folder and then into static/ folder. Standard for Flask
img_path = os.path.join(os.path.dirname(os.path.dirname(__file__)), "static", "img.png")

# Generate QRCode 
def qr_generator():
    # Change link inside .make("link") to decide what the output will be 
    img = qrcode.make("http://google.com")
    type(img)
    img.save(img_path)
    res = f"{img_path} created"
    return res
