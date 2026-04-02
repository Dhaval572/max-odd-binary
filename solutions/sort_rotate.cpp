// https://godbolt.org/z/6r3Tqbsdo

#include <algorithm>
#include <print>
#include <string>

using namespace std::string_literals;

auto maximum_odd_binary(std::string s) -> std::string {
  std::ranges::sort(s, std::greater{});
  std::ranges::rotate(s, std::next(s.begin()));
  return s;
}

int main() {
  auto const a = "1011"s;
  auto const b = "100"s;
  auto const c = "111000"s;
  auto const d = "0101"s;
  auto const e = "1111"s;
  std::println("In: {}\nOut: {}\n", a, maximum_odd_binary(a));
  std::println("In: {}\nOut: {}\n", b, maximum_odd_binary(b));
  std::println("In: {}\nOut: {}\n", c, maximum_odd_binary(c));
  std::println("In: {}\nOut: {}\n", d, maximum_odd_binary(d));
  std::println("In: {}\nOut: {}\n", e, maximum_odd_binary(e));
  return 0;
}