/**
 * https://www.acmicpc.net/problem/31775
 */
use { std::io };

fn main() {
    let mut ret = 0;
    for _ in 0..3 {
        let s = read_input();
        if s.starts_with("l") {
            ret += 1
        } else if s.starts_with("k") {
            ret += 2
        } else if s.starts_with("p") {
            ret += 4
        }
    }
    if ret == 7 {
        println!("{}", "GLOBAL");
    } else {
        println!("{}", "PONIX");
    }
}

fn read_input() -> String {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    inp
}
