/**
 * https://www.acmicpc.net/problem/31428
 */
use std::io;

fn main() {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let _n: i64 = inp.trim().parse().unwrap();
    
    let mut inp2 = String::new();
    io::stdin().read_line(&mut inp2).unwrap();
    let words: Vec<&str> = inp2.trim().split_whitespace().collect();

    let mut inp3 = String::new();
    io::stdin().read_line(&mut inp3).unwrap();
    let hello = inp3.trim();

    let mut res = 0;
    for word in words {
        if word == hello {
            res += 1;
        }
    }

    println!("{}", res);
}
