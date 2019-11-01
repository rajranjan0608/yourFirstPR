//Execute the code by typing "node rmviana.Q3.js 1"

const isPrime = (number) => {
    let prime = true
    for(let i = 1; i < number; i++){
        for(let j = i; j < number; j++){
            if(i * j === number)
                prime = false
        }
    }
    return prime
}

number = parseInt(process.argv[2])
console.log(isPrime(number))