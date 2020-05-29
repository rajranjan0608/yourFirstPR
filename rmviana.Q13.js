//Execute the code by typing "node rmviana.Q13.js 10"

const fibonacci = (n) => {
    if(n === 0)
        return -1
    if(n === 1 || n === 2)
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)
}

let terms = parseInt(process.argv[2])
console.log(fibonacci(terms))