//Execute the code by typing "node rmviana.Q1.js 1,2,3"

const findGreatest = (numbers) => {
    let great = numbers[0]
    for(number of numbers){
        if(number > great)
            great = number
    }
    return great
}

let numbers = process.argv[2].split(',').map((number) => parseInt(number))
console.log(findGreatest(numbers))