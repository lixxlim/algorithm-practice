/**
 * https://www.acmicpc.net/problem/3035
 */
use { std::io };

fn main() {
    let nums = read_input();
    if nums.len() < 4 {
        return
    }
    let R = nums[0];
    let ZR = nums[2];
    let ZC = nums[3];
    for _ in 0..R {
        let st = read_input_str();
        let mut ret_st = String::new();
        for s in st.chars() {
            ret_st.push_str(&s.to_string().repeat(ZC));
        }
        ret_st.push_str("\n");
        print!("{}", ret_st.repeat(ZR));
    }
}

fn read_input() -> Vec<usize> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let nums: Vec<usize> = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<usize>().unwrap())
        .collect();
    nums
}

fn read_input_str() -> String {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    inp.trim().to_string()
}
