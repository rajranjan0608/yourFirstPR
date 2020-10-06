say "Enter a positive number: "
pull number
isPrime = 1
isNumber = 1
if (DATATYPE(number, 'W')) then
	if \((number // 2 = 0) & (number \= 2)) then
		do
			i = TRUNC(number / 2)
			do while(i > 3)
				if (number // i == 0) then
					isPrime = 0
				i = i - 1
			end
		end
	else
		isPrime = 0
else
do
	isNumber = 0
	isPrime = 0
end

if (number == 1) then
	say number "is neither a prime nor a composite number."
else if (isPrime == 1) then
	say number "is a Prime number."
else if (isNumber == 1) then
	say number "is a composite number."
else
	say "Please enter a whole number."
