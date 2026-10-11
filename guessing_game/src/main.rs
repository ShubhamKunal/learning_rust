use std::io;

fn main() {
    println!("Guess a number!");
    println!("Please Input your guess:");
    let mut guess = String::new();

    io::stdin().read_line(&mut guess).expect("Failed to read this fucking line");

    println!("You guessed:{guess}");
}

