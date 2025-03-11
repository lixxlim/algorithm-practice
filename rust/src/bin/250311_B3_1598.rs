/**
 * https://www.acmicpc.net/problem/1598
 */
use { std::io, std::error::Error };

fn main() {
    let mut sum: i32 = 0;
    let (x, y) = read_input().unwrap();

    let x1: i32 = (x - 1) % 4;
    let y1: i32 = (y - 1) % 4;
    sum += if x1 > y1 { x1 - y1 } else { y1 - x1 };

    let x2: i32 = (x - 1) / 4 + 1;
    let y2: i32 = (y - 1) / 4 + 1;
    sum += if x2 > y2 { x2 - y2 } else { y2 - x2 };

    println!("{}", sum);
}

fn read_input() -> Result<(i32, i32), Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: Vec<i32> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<i32>())
        .collect::<Result<_, _>>()?;
    Ok((num[0], num[1]))
}
