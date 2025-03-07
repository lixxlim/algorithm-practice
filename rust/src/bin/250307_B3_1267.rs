/**
 * https://www.acmicpc.net/problem/1267
 */
use { std::io, std::error::Error, std::collections::HashMap };

fn main() {
    let map: HashMap<Company, (usize, usize)> = HashMap::from([(Company::Y, (30, 10)), (Company::M, (60, 15))]);

    let _n = read_input().unwrap();
    let call: Vec<usize> = read_input().unwrap();

    let y = calc_cost(&call, map.get(&Company::Y)).unwrap();
    let m = calc_cost(&call, map.get(&Company::M)).unwrap();
    let min = get_min(y, m);

    println!("{}{}{}", if y == min { "Y " } else { "" }, if m == min { "M " } else { "" }, min);
}

fn read_input() -> Result<Vec<usize>, Box<dyn Error>> {
    let mut inp = String::new();
    io::stdin().read_line(&mut inp)?;
    let nums = inp
        .trim()
        .split_whitespace()
        .map(|s| s.parse::<usize>())
        .collect::<Result<_, _>>()?;
    Ok(nums)
}

#[derive(PartialEq, Eq, Hash)]
enum Company {
    Y,
    M,
}

fn calc_cost(vec: &Vec<usize>, company: Option<&(usize, usize)>) -> Result<usize, Box<dyn Error>> {
    let mut cost = 0;
    let (time, fee) = company.unwrap();
    for i in 0..vec.len() {
        cost += ((vec[i] / time) + 1) * fee;
    }
    Ok(cost)
}

fn get_min(a: usize, b: usize) -> usize {
    if a < b { a } else { b }
}
