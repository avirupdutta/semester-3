echo "Enter a No."
read n
a=0
b=1
c=0
echo $a
echo $b
for ((i=1;i<=(n-2);i++))
do
c=$((a+b))
a=$b
b=$c
echo $c
done
