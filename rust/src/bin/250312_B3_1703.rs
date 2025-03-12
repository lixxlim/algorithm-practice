/**
 * https://www.acmicpc.net/problem/1703
 */
use { std::io, std::error::Error };

fn main() {
    loop {
        let inp: Vec<i32> = read_input().unwrap();
        if inp.len() == 0 || inp[0] == 0 {
            break;
        }

        let mut sum = 1;
        for i in 1..inp.len() {
            let is_odd = i & 1 == 1;
            match is_odd {
                true => sum *= inp[i],
                false => sum -= inp[i],
            }
        }

        println!("{}", sum);
    }
}

fn read_input() -> Result<Vec<i32>, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let nums: Vec<i32> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<i32>())
        .collect::<Result<_, _>>()?;
    Ok(nums)
}
