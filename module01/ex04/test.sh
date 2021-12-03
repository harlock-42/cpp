file_name=$1
s1="qui"
s2="lolo"

sed "s/$2/$3/g" $1 > out
./replace $1 $2 $3
file_name+=".replace"
diff out $file_name > res
cat res

rm res out $file_name