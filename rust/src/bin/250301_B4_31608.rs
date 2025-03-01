/**
 * https://www.acmicpc.net/problem/31608
 */
use std::io;
use std::error::Error;

fn main() {
    let n: i32 = read_input_as_num().unwrap();
    let s: String = read_input_as_str().unwrap();
    let t: String = read_input_as_str().unwrap();

    let chars_s: Vec<char> = s.chars().collect();
    let chars_t: Vec<char> = t.chars().collect();
    let mut cnt = 0;
    for i in 0..n {
        let idx = i as usize;
        if chars_s[idx] != chars_t[idx] {
            cnt += 1;
        }
    }

    println!("{}", cnt);
}

fn read_input_as_num() -> Result<i32, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num = inp.trim().parse::<i32>()?;
    Ok(num)
}

fn read_input_as_str() -> Result<String, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    Ok(inp.trim().to_string())
}