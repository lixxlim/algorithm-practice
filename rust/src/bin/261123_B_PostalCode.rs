/**
 * https://atcoder.jp/contests/abc084/tasks/abc084_b
 */
use std::io::{self, Read};

fn main() {
    let mut inp = String::new();
    io::stdin().read_to_string(&mut inp).unwrap();
    let inp = inp.trim();
    
    let mut iter = inp.split_whitespace();
    
    let a : usize = iter.next().unwrap().parse().unwrap();
    let _b : usize = iter.next().unwrap().parse().unwrap();
    let s = iter.next().unwrap();

    let s_a = &s[0..a];
    let s_dash = &s[a..a+1];
    let s_b = &s[a+1..];

    if !s_a.bytes().all(|c| c.is_ascii_digit()) {
        println!("No");
        return
    }

    if s_dash != "-" {
        println!("No");
        return
    }

    if !s_b.bytes().all(|c| c.is_ascii_digit()) {
        println!("No");
        return
    }

    println!("Yes");
}
