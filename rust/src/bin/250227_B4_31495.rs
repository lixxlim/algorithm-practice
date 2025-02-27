/**
 * https://www.acmicpc.net/problem/31495
 */
use std::io;

fn main() {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    inp = inp.trim().to_string();

    let res = if inp.len() > 2 && inp.starts_with('"') && inp.ends_with('"') {
        &inp[1.. inp.len()-1]
    } else {
        "CE"
    };

    println!("{}", res);
}
