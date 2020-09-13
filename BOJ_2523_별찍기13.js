const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout,
});

let N;
readline.question("", (_N) => {
  N = _N;
  readline.close();

  main();
});

function main() {
  for (let i = 1; i <= N; i++) {
    console.log("*".repeat(i));
  }
  for (let i = N - 1; i > 0; i--) {
    console.log("*".repeat(i));
  }
}
