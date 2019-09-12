echo "Enter a No."
read n
rev=0
dig=0
while ["$n" != 0]
do
dig=$((n%10))
rev=$((rev*10+dig))
n=$((n/10))
done
echo $rev:
