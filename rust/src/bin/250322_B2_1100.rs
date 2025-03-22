/**
 * https://www.acmicpc.net/problem/1100
 */
use { std::io };

fn main() {
    let mut sum: usize = 0;
    for i in 0..8 {
        let inp: String = read_input();
        for j in (0..8).step_by(2) {
            let chk = (i % 2) + j;
            if inp.chars().nth(chk) == Some('F') {
                sum += 1;
            }
        }
    }
    println!("{}", sum);
}

fn read_input() -> String {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    inp
}
