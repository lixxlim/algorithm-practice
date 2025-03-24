/**
 * https://www.acmicpc.net/problem/32951
 */
use { std::io };

fn main() {
    let year = read_input();
    println!("{}", year - 2024);
}

fn read_input() -> usize {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: usize = inp.trim().parse().unwrap();
    num
}
