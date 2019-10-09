function greatestOfThreeNumbers(num1, num2, num3){
    let greatestNumber = num1;
    if (num2 > greatestNumber) {
        greatestNumber = num2;
    }
    if (num3 > greatestNumber) {
        greatestNumber = num2;
    }
    return greatestNumber;
}