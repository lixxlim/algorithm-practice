use std::io;

pub fn main() {
    let mut input_line = String::new();
    io::stdin().read_line(&mut input_line).expect("Failed to read line");
    let mut numbers_str = input_line.trim().split_whitespace();
    let a_str = numbers_str.next().unwrap();
    let b_str = numbers_str.next().unwrap();

    let a: u64 = a_str.parse().unwrap();
    let b: u64 = b_str.parse().unwrap();

    let gcd_val = gcd(a, b);
    let lcm_val = (a / gcd_val) * b;

    println!("{}", lcm_val);
}

fn gcd(a: u64, b: u64) -> u64 {
    let mut num1 = a;
    let mut num2 = b;
    while num2 != 0 {
        let remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    num1
}
