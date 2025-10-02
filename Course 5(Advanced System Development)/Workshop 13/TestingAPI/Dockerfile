FROM python:3.9-slim

WORKDIR /app

# Copy requirements first 
COPY requirements.txt .

# Install OS dependet lib 
RUN apt update -y && \
    apt install libzbar-dev -y && \
    apt clean && \
    rm -rf /var/lib/apt/lists/*

# Install python dependencies
RUN pip3 install --no-cache-dir -r requirements.txt 

COPY . /app

EXPOSE 8000

# Configured inside run.sh
CMD ["python", "app.py"]
