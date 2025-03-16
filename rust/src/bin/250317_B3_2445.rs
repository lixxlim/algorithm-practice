/**
 * https://www.acmicpc.net/problem/2445
 */
use { std::io, std::error::Error };

fn main() {
    let n = read_input().unwrap();
    let m = n;
    for i in 1..n {
        println!("{}{}{}", "*".repeat(i), " ".repeat((n - i) * 2), "*".repeat(i));
    }
    println!("{}", "*".repeat(n * 2));
    for i in 1..m {
        println!("{}{}{}", "*".repeat(m - i), " ".repeat(i * 2), "*".repeat(m - i));
    }
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}
