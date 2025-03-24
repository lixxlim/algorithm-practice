/**
 * https://www.acmicpc.net/problem/2506
 */
use { std::io };

fn main() {
    let n: usize = read_inp();
    let nums: Vec<usize> = read_numbers();
    let mut sum = 0;
    let mut bonus = 0;
    for i in 0..n {
        if nums[i] == 1 {
            bonus += 1;
            sum += bonus;
        } else {
            bonus = 0;
        }
    }
    println!("{}", sum);
}

fn read_inp() -> usize {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let num: usize = inp.trim().parse().unwrap();
    num
}

fn read_numbers() -> Vec<usize> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let nums: Vec<usize> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<usize>().unwrap())
        .collect();
    nums
}
