/**
 * https://www.acmicpc.net/problem/1284
 */
use { std::io, std::error::Error };

fn main() -> Result<(), Box<dyn Error>> {

    loop {
        let inp = read_input()?;
        let num = inp.parse::<i32>().unwrap();
        if num == 0 {
            break Ok(());
        }

        let mut res: usize = inp.len() + 1;
        
        for ch in inp.chars() {
            res += match ch {
                '0' => 4,
                '1' => 2,
                _ => 3,
            }
        };

        println!("{}", res);
    }
}

fn read_input() -> Result<String, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    Ok(inp.trim().to_string())
}
