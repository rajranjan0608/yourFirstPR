function printASquare(size, char = '*') {
    let square= "\n"; //account for the opening quote

    for (let i = 0; i < size; i++) {
        let row = "";
        
        for (let j = 0; j < size; j++) {
            row = row + char;
        }
        square = square + row + "\n";
    }
    console.log(square);
}