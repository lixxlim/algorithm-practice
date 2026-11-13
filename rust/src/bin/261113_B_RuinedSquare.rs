/** 
 * https://atcoder.jp/contests/abc108/tasks/abc108_b 
 */
use std::io::{self, Read};

fn main() {
    let mut input : String = String::new();

    io::stdin()
        .read_to_string(&mut input)
        .unwrap();

    let mut iter = input.as_str().split_whitespace();

    let x1: i32 = iter.next().unwrap().parse().unwrap();
    let y1: i32 = iter.next().unwrap().parse().unwrap();
    let x2: i32 = iter.next().unwrap().parse().unwrap();
    let y2: i32 = iter.next().unwrap().parse().unwrap();

    let dx = x2 - x1;
    let dy = y2 - y1;

    let x3 = x2 - dy;
    let y3 = y2 + dx;

    let x4 = x1 - dy;
    let y4 = y1 + dx;

    println!("{} {} {} {}", x3, y3, x4, y4);
}

