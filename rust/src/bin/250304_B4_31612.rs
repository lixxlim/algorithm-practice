/**
 * https://www.acmicpc.net/problem/31612
 */
use std::io;
use std::error::Error;
use std::collections::HashMap;

fn main() {
    let _n = read_int().unwrap();
    let s = read_str().unwrap();

    let mut map: HashMap<char, i32> = HashMap::new();
    map.insert('j', 2);
    map.insert('o', 1);
    map.insert('i', 2);

    let mut sum = 0;
    for c in s.chars() {
        sum += map.get(&c).unwrap_or(&0);
    }

    println!("{}", sum);
}

fn read_int() -> Result<i32, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let num: i32 = inp.trim().parse()?;
    Ok(num)
}

fn read_str() -> Result<String, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    Ok(inp)
}
