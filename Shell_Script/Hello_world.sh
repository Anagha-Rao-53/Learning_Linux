mkdir new
cd new
if [ $? -eq 0 ]; then
	echo "CREATED AND NAVIGATED"
	echo "DELETING NOW"
	rm -rf ../new
fi
read num1
read num2
echo "$((num1 + num2))"
