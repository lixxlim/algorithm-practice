/**
 * https://atcoder.jp/contests/abc052/tasks/abc052_b
 */
use std::io::{self, Read};

fn main() {
    let mut inp = String::new();
    io::stdin()
        .read_to_string(&mut inp)
        .unwrap();

    let mut max : i32 = 0;
    let mut cur : i32 = 0;
    for c in inp.chars() {
        if c == 'I' {
            cur += 1;
        } else if c == 'D' {
            cur -= 1;
        }
        max = max.max(cur);
    }

    println!("{}", max);
}
