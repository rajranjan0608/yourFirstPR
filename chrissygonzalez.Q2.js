function oddOrEven(num){
    let number = num;

    if (num < 0) {
        number *= -1;
    }

    if (num % 2 === 0) {
        return `${num} is even.`
    } else {
        return `${num} is odd.`
    }
}