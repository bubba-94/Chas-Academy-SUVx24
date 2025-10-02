from PIL import Image
from pyzbar.pyzbar import decode, ZBarSymbol

# Import created img from 
from create import img_path

def qr_reader(img_path):
    img = Image.open(img_path)
    decoded_list = decode(img)

    res = (
        f"{decoded_list[0].data.decode()}, "
    )
    return res
