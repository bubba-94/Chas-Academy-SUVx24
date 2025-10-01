from flask import abort, make_resposnes
from datetime import datetime

def get_timestamp():
    return datetime.now().strftime(("%Y-%m-%d %H:%M:%S"))

CLIMATE = {
    "1": {"humid": 90.3,"temp": 6,"timestamp": get_timestamp()},
    "2": {"humid": 20.4,"temp": 23,"timestamp": get_timestamp()},
    "3": {"humid": 50.4,"temp": 34,"timestamp": get_timestamp()},
    "4": {"humid": 34.2,"temp": 10,"timestamp": get_timestamp()}
}


def read_all():
    list(CLIMATE.values())
def delete():
    del CLIMATE.clear()
    return '', 204
def update_sensor(reg):
    if reg in CLIMATE:
        