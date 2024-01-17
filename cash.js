// ! this is the Greedy Algorithm program in

//* Ask how many cents the customer is owed
let cents = getCents();

//* Calculate the number of quarters to give the customer
let quarters = calcQuarters(cents);
cents = cents - quarters * 25;

//* Calculate the number of dimes to give the customer
let dimes = calcDimes(cents);
cents = cents - dimes * 10;

//* Calculate the number of nickels to give the customer
let nickels = calcNickels(cents);
cents = cents - nickels * 5;

//* Calculate the number of pennies to give the customer
let pennies = calcPennies(cents);
cents = cents - pennies * 1;

// * Sum coins
let coins = quarters + dimes + nickels + pennies;

//* Print total number of coins to give the customer
console.log(`${coins} Coins`);

//*print coins number in stars
for (let i = 0; i < coins; i++) {
  // ? print stars without new line
  process.stdout.write("* ");
}
console.log("")

//* print quarters
if (quarters > 0) console.log(`${quarters} Quarters 25₵\n`);

// * print dimes count
if (dimes > 0) console.log(`${dimes} Dimes 10₵\n`);

// * print nickels count
if (nickels > 0) console.log(`${nickels} Nickels 5₵\n`);

// * print pennies count
if (pennies > 0) console.log(`${pennies} Pennies 1₵\n`);

// ! Functions

function getCents() {
  //! require Run 'npm install prompt-sync'
  const prompt = require("prompt-sync")();

  let change;
  do {
    change = prompt("Change Owed: ");
  } while (change < 0);

  return change;
}

function calcQuarters(cents) {
  let i = 0;
  while (cents >= 25) {
    cents -= 25;
    i++;
  }
  return i;
}

function calcDimes(cents) {
  let i = 0;
  while (cents >= 10) {
    cents -= 10;
    i++;
  }
  return i;
}

function calcNickels(cents) {
  let i = 0;
  while (cents >= 5) {
    cents -= 5;
    i++;
  }
  return i;
}

function calcPennies(cents) {
  let i = 0;
  while (cents >= 1) {
    cents -= 1;
    i++;
  }
  return i;
}
