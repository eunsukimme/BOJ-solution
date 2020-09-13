const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

let originNumber;
let changingNumber;
let count = 0;
readline.question("", (_N) => {
  originNumber = _N;
  changingNumber = _N;
  readline.close();

  main();
});

function main() {
  do {
    let sum;
    let oneDigit;
    let tenDigit;
    if (changingNumber < 10) {
      oneDigit = changingNumber;
      sum = changingNumber;
    } else {
      oneDigit = Math.floor(changingNumber % 10);
      tenDigit = Math.floor((changingNumber % 100) / 10);
      sum = tenDigit + oneDigit;
    }
    changingNumber = oneDigit * 10 + (sum % 10);
    count += 1;
  } while (originNumber != changingNumber);

  console.log(count);
}
