//Execute the code by typing "node rmviana.Q2.js 1"

const oddOrEven = (number) => number % 2 === 0 ? 'Even' : 'Odd'

number = parseInt(process.argv[2])
console.log(oddOrEven(number))