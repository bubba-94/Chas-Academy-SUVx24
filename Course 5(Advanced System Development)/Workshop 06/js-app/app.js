const express = require("express")
const app = express()
const PORT = 3000

app.get("/", (_request, _response) =>
{
    _response.send("Hello from Node.js in Docker")
})
    app.listen(PORT, () =>
{
    console.log(`App is listening to port:${PORT}`)
})