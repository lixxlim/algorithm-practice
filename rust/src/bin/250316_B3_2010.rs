/**
 * https://www.acmicpc.net/problem/2010
 */
use { std::io, std::error::Error };

fn main() {
    let n = read_input().unwrap();
    let mut sum: usize = read_input().unwrap();
    for _i in 1..n {
        sum += read_input().unwrap() - 1;
    }
    println!("{}", sum);
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}
