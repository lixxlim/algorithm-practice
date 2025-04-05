/**
 * https://www.acmicpc.net/problem/2523
 */
use { std::io };

fn main() {
    let n = read_input();
    for i in 0..n {
        println!("{}", "*".repeat(i + 1))
    }
    for i in 0..n-1 {
        println!("{}", "*".repeat(n - i - 1))
    }
}

fn read_input() -> usize {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: usize = inp.trim().parse().unwrap();
    num
}
