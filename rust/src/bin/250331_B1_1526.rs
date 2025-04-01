/**
 * https://www.acmicpc.net/problem/1526
 */
use { std::io };

fn main() {
    let mut n = read_input();
    while !check(&n) {
        n -= 1;
    }
    println!("{}", n);
}

fn read_input() -> usize {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: usize = inp.trim().parse().unwrap();
    num
}

fn check(n: &usize) -> bool {
    let mut ret: bool = false;
    let n_str: String = n.to_string();
    if n_str.replace("7", "").replace("4", "").len() == 0 {
        ret = true;
    }
    ret
}
