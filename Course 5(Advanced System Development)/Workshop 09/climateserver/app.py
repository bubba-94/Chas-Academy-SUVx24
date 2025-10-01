import connexion

# Create the Connexion app
app = connexion.App(__name__, specification_dir='.')
app.add_api('swagger.yml', strict_validation=True)

if __name__ == '__main__':
    app.run(port=8000, debug=True)