FROM python:3.9-slim

WORKDIR /app

COPY requirements.txt .

# Include Flask, connexion
RUN pip3 install -r requirements.txt

COPY . /app

EXPOSE 8000

# Will run server
CMD ["python", "app.py"]
