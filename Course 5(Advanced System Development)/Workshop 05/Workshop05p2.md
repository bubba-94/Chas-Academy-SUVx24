# Part 2 

### Question 1: Write a commando that creates and runs a container based on the image `alpine` that prints the text `"Hello from alpine"`

`docker run alpine echo "Hello from alpine"`

### Question 2: What happens to a container after a commando that has been run in it has finished

The container PID 1 is = `echo "Hello from alpine"` and when that command finished the process is over and the container exits 

### Question 3: Write a commnd that creates and immediatly removes a container after execution

`docker run --rm alpine echo "Hello from alpine"`

### Question 4: Write a command that starts and interactive terminalsession in an Ubuntu container

`docker run -it ubuntu`

### Question 5: How do you run a container in the background (detached mode)

`docker run -it -d ubuntu` -d flag will make the docker run detached

### Question 6: Create a container from alpine with the name `testcontainer`

`docker run --name testcontainer alpine`

### Question 7: Create a container that runs `sleep 60` i `alpine`

`docker run --name test ubuntu sleep 60` 

### Question 8: How do you see the status on all container, including stopped ones

`docker ps -a` -a flag to view all stopped ones aswell

### Question 9: How do you restart an earlier stopped container with id `abc123`

`docker run --name abc123 alpine`
`docker stop abc123`
`docker start abc123`

### Question 10: How do you look at the latest output from a container with `mytest`

`docker logs mytest` -f to follow the container with live output
