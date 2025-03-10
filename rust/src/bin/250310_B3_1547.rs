/**
 * https://www.acmicpc.net/problem/1547
 */
use { std::io, std::error::Error };

fn main() {
    let mut has_ball = 1;
    let n = read_num().unwrap();
    for _i in 0..n {
        let (x, y) = read_nums().unwrap();
        has_ball = match (x == has_ball, y == has_ball) {
            (true, false) => y,
            (false, true) => x,
            _ => has_ball
        };
    }
    println!("{}", has_ball);
}

fn read_num() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}

fn read_nums() -> Result<(i32, i32), Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let res: Vec<i32> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<i32>())
        .collect::<Result<_, _>>()?;
    Ok((res[0], res[1]))
}
