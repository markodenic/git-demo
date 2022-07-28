let numbers = [324, 2, 43, 5, 2, 1];

function getLowestNumber() {
    let output = [];
    let temp;
    for (i = 0; i <= 1; i++) {
        output.push(Math.min(...numbers));
        temp = numbers.findIndex(num => num === output[0]);    
    }
    console.log('LAST TWO LOWEST NUMBERS FROM ARRAY OF NUMBERS ==> ', output);
}

getLowestNumber();