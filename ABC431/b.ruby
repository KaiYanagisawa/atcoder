# frozen_string_literal: true

x = gets.to_i
gets.to_i
w = gets.split.map(&:to_i)
q = gets.to_i

p = q.times.map { gets.to_i }

history = []

q.times do |i|
  if history.find_index(p[i])
    x -= w[p[i] - 1]
    history.delete(p[i])
  else
    x += w[p[i] - 1]
    history << p[i]

  end
  puts x
end
