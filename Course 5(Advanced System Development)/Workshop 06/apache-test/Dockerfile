# Public Apche httpd image
FROM httpd:2.4

RUN apt update && \  
    apt install -y tree

COPY ./public-html/ /usr/local/apache2/htdocs/


