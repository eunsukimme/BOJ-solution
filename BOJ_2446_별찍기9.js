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
  let spacing = 0;
  for (let i = N * 2 - 1; i > 1; i -= 2) {
    console.log(" ".repeat(spacing) + "*".repeat(i));
    spacing += 1;
  }
  for (let i = 1; i <= N * 2 - 1; i += 2) {
    console.log(" ".repeat(spacing) + "*".repeat(i));
    spacing -= 1;
  }
}
