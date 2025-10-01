import os;
import requests;
from bs4 import BeautifulSoup

key = 'URL'

def get_title(url: str) -> str:
    response = requests.get(url, timeout=10)
    response.raise_for_status() # raises an error for bad responses
    soup = BeautifulSoup(response.text, "html.parser")
    title = soup.title.string if soup.title else "No title found"
    return title.strip()

def main (url):
    print(url,'->', get_title(url))

if __name__ == '__main__': 
    main(os.getenv(key))
