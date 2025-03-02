/**
 * https://www.acmicpc.net/problem/31403
 */
use std::io;
use std::error::Error;

fn main() {
    let a = get_input().unwrap();
    let b = get_input().unwrap();
    let c = get_input().unwrap();
    println!("{}", a + b - c);
    println!("{}", (a.to_string() + &b.to_string()).parse::<i32>().unwrap() - c)
}

fn get_input() -> Result<i32, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num = inp.trim().parse::<i32>()?;
    Ok(num)
}
