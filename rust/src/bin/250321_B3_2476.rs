/**
 * https://www.acmicpc.net/problem/2476
 */
use { std::io, std::error::Error, std::cmp };

fn main() {
    let n: usize = read_input().unwrap();
    let mut max = 0;
    for _i in 0..n {
        let num = read_input_dice().unwrap();
        let p = check_price(num[0], num[1], num[2]);
        max = cmp::max(max, p);
    }
    println!("{}", max);
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp
        .trim()
        .parse()?;
    Ok(num)
}

fn read_input_dice() -> Result<Vec<usize>, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: Vec<usize> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<usize>())
        .collect::<Result<_, _>>()?;
    Ok(num)
}

fn check_price(x: usize, y: usize, z: usize) -> usize {
    match (x, y, z) {
        (x, y, z) if x == y && y == z => 10000 + x * 1000,
        (x, y, z) if x == y && y != z => 1000 + x * 100,
        (x, y, z) if x == z && z != y => 1000 + x * 100,
        (x, y, z) if y == z && x != y => 1000 + y * 100,
        _ => cmp::max(cmp::max(x, y), z) * 100
    }
}
