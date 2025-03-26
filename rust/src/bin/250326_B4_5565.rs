/**
 * https://www.acmicpc.net/problem/5565
 */
use { std::io };

fn main() {
    let mut n = read_input();
    for _ in 0..9 {
        let m = read_input();
        n -= m;
    }
    println!("{}", n);
}

fn read_input() -> usize {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: usize = inp.trim().parse().unwrap();
    num
}
