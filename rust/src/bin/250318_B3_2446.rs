/**
 * https://www.acmicpc.net/problem/2446
 */
use { std::io, std::error::Error };

fn main() {
    let n = read_input().unwrap();
    for i in 0..n {
        println!("{}{}*{}", " ".repeat(i), "*".repeat(n - i - 1), "*".repeat(n - i - 1));
    }
    for i in 1..n {
        println!("{}{}*{}", " ".repeat(n - i - 1), "*".repeat(i), "*".repeat(i));
    }
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}
