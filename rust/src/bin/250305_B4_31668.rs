/**
 * https://www.acmicpc.net/problem/31668
 */

use { std::io, std::error::Error };

fn main() {
    let n = read_inp().unwrap();
    let m = read_inp().unwrap();
    let k = read_inp().unwrap();

    let sum = (m / n) * k;
    println!("{}", sum);
}

fn read_inp() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse::<usize>()?;
    Ok(num)
}
