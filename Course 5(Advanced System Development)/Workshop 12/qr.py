import qrcode

img = qrcode.make('Hello from qrcode creation!')
type(img)
img.save("img.png")