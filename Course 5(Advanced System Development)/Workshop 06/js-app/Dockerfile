# Använd officiell Node.js-bild
FROM node:18-alpine
# Skappaa app-katalog
WORKDIR /app
# Kopiera package.json och package-lock.json
COPY package*.json ./
# Installera app-beroenden
RUN npm install
# Kopiera app-källkod
COPY . .
# Exponera port 3000
EXPOSE 3000
# Definiera kommandot för att köra appen
CMD ["node", "app.js"]