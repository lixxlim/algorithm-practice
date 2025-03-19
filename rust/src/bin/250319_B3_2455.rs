/**
 * https://www.acmicpc.net/problem/2455
 */
use { std::io, std::error::Error, std::cmp };

fn main() {
    let mut sum: usize = 0;
    let mut max: usize = 0;
    for _i in 0..4 {
        let (down, up) = read_input().unwrap();
        sum -= down;
        sum += up;
        max = cmp::max(max, sum);
    }
    println!("{}", max);
}

fn read_input() -> Result<(usize, usize), Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let mut num = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<usize>().expect(""));
    Ok((num.next().unwrap(), num.next().unwrap()))
}
