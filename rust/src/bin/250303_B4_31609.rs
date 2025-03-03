/**
 * https://www.acmicpc.net/problem/31609
 */
use std::io;
use std::error::Error;

fn main() {
    let n: usize = read_input().unwrap();
    let vec: Vec<i32> = read_input_list().unwrap();

    let mut arr: Vec<i32> = vec![0; 10];
    let n = std::cmp::min(n, vec.len());

    for i in 0..n {
        let idx = vec[i];
        if idx >= 0 && (idx as usize) < arr.len() {
            let idx_usize = idx as usize;
            arr[idx_usize] += 1;
        }
    }
    for i in 0..arr.len() {
        if arr[i] > 0 {
            println!("{}", i);
        }
    }
}

fn read_input() -> Result<usize, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: usize = inp.trim().parse()?;
    Ok(num)
}

fn read_input_list() -> Result<Vec<i32>, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let nums: Vec<i32> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<i32>())
        .collect::<Result<_, _>>()?;
    Ok(nums)
}
