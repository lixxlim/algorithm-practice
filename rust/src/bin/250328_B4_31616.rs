/**
 * https://www.acmicpc.net/problem/31616
 */
use { std::io };

fn main() {
    let _ = read_input();
    let s = read_input();
    let t = s.chars().nth(0).unwrap();
    for c in s.chars() {
        if c != t {
            println!("{}", "No");
            return;
        }
    }
    println!("{}", "Yes");
}

fn read_input() -> String {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    inp.trim().to_string()
}
