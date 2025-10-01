# First parameter passed
URL=$1

# App name to be found 
APP_NAME=gettitle2.py

# Locate file in current dir
PY_FILE=$(find . -name "$APP_NAME" -type f | head -n 1)

if [ -n  "$URL" ]; then
    echo $URL
else 
    echo "No url found"
    exit
fi

# Locate python file in scipt and exec if found 
if [ -n "$PY_FILE" ]; then
    exec python3 "$PY_FILE" "$URL"
else
    echo "No $APP_NAME found"
fi
