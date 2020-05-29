//Execute the code by typing "node rmviana.Q11.js 1,2"

const addTwoNumbers = (numberOne, numberTwo) => numberOne -= -numberTwo

let numberOne = parseInt(process.argv[2].split('')[0]),
numberTwo = parseInt(process.argv[2].split(',')[1])

console.log(addTwoNumbers(numberOne, numberTwo))