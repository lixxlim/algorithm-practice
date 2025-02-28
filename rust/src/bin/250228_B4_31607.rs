/**
 * https://www.acmicpc.net/problem/31607
 */
use std::io;

fn main() {
    let a: i32 = get_input();
    let b: i32 = get_input();
    let c: i32 = get_input();

    let max: i32 = get_max(a, b, c);
    let check: bool = max == a + b + c - max;
    if check {
        println!("{}", 1);
    } else {
        println!("{}", 0);
    }
}

fn get_input() -> i32 {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: i32 = inp.trim().parse().unwrap();
    num
}

fn get_max(a: i32, b: i32, c: i32) -> i32 {
    let mut max = a;
    if b > max {
        max = b;
    }
    if c > max {
        max = c;
    }
    max
}
