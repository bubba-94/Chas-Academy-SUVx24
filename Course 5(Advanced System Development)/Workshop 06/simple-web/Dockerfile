# Use an official image
FROM nginx:alpine

# Copy webfiles to nginx webservercatalog
COPY . /usr/share/nginx/html

# Expose port 80
EXPOSE 80

# nginx starts automatically, so no CMD needed

# -p 8080:80 connects host port 8080 to 80
# docker run -d -p 8080:80 --name {container_id} {image}

# open a webpage at http://localhost:8080
