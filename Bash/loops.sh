#Loops in bash:
#!/bin/bash

#for loop
for i in {1..5}
do
    echo "Iteration $i"
done

#while loop
count=1
while [ $count -le 5 ]
do
    echo "Count: $count"
    ((count++))
done

#until loop
counter=1
until [ $counter -gt 5 ]
do
    echo "Counter: $counter"
    ((counter++))
done 

