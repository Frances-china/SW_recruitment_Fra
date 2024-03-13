#Write a Dockerfile that sets up a web server using Python and serves the index.html file located in the same directory as this README.
#The Dockerfile should perform the following steps:
#   #Install Python
#   #Copy the index.html file into the container, placing it in a dedicated folder
#   #Configure the Dockerfile to start a Python web server that serves files from the folder where the index.html file is located
#Feel free to use whichever port you find suitable.

# Usa un'immagine base con Python
FROM python:latest

# Imposta il work directory all'interno del container
WORKDIR /app

# Copia il file index.html nella directory /app del container
COPY index.html /app/index.html

# Installa un server web Python
RUN pip install flask

# Esponi la porta 5000 per il server web
EXPOSE 5000

# Imposta l'ambiente di produzione per Flask
ENV FLASK_APP=server.py

# Script per avviare il server web
#CMD ["flask", "run", "--host=0.0.0.0"]

CMD ["flask", "run", "--host=0.0.0.0", "--port=5000"]


