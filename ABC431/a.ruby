# frozen_string_literal: true

h, b = gets.split.map(&:to_i)

puts (h - b).positive? ? h - b : 0
