/**
 * https://www.acmicpc.net/problem/2441
 */
use { std::io, std::error::Error };

fn main() {
    let n = get_input().unwrap();
    for i in 0..n {
        println!("{}{}", " ".repeat(i), "*".repeat(n - i));
    }
}

fn get_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse::<usize>()?;
    Ok(num)
}
