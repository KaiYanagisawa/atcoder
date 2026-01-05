# frozen_string_literal: true

N, M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

N.times do |i|
  a = A.dup
  a.delete_at(i)
  return puts 'Yes' if a.sum == M
end
puts 'No'
