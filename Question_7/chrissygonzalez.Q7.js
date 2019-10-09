function greatestCommonDivisor(num1, num2){
    let smallerNum;
    num1 < num2 ? smallerNum = num1 : smallerNum = num2;
    
    for (let i = smallerNum; i > 0; i--) {
        if (num1 % i === 0 && num2 % i === 0) {
            return i;
        }
    }
}