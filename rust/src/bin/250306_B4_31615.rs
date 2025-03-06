/**
 * https://www.acmicpc.net/problem/31615
 */
use { std::io, std::error::Error };

fn main() {
    let a = read_input().unwrap();
    let b = read_input().unwrap();
    println!("{}", (a + b).to_string().len())
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}
