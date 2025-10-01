from PIL import Image
from pyzbar.pyzbar import decode, ZBarSymbol

img = Image.open('img.png')

decoded_list = decode(img)

print(type(decoded_list))
print(len(decoded_list))
print(type(decoded_list[0]))
print(decoded_list[0])


