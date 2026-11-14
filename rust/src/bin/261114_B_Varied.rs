/**
 * https://atcoder.jp/contests/abc063/tasks/abc063_b
 */
use std::io::{self, Read};

fn main() {
    let mut inp = String::new();
    io::stdin().read_to_string(&mut inp).unwrap();
    let inp = inp.trim();

    let mut visited = [false; 26];
    for c in inp.chars() {
        let idx = c as usize - 'a' as usize;
        if visited[idx] {
            println!("no");
            return;
        }
        visited[idx] = true;
    }
    println!("yes");
}
