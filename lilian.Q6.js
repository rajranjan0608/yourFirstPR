const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let number1, number2;

rl.question('Insert first number:', (number1) => {
	rl.question('Insert second number:', (number2) => {
		for(i=number1; i<=number2; i++){
			if (i%2==0) console.log(i);
		}
		rl.close();
	});
});

