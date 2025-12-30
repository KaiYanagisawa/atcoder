# frozen_string_literal: true

A, B, C, D = gets.split.map(&:to_i)

puts(C >= A && D < B ? 'Yes' : 'No')
