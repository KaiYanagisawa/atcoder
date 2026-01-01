# frozen_string_literal: true

require 'debug'

N, M = gets.split.map(&:to_i)
S = N.times.map { gets.chomp.chars }

kinds = Set.new
(N - M + 1).times do |i|
  (N - M + 1).times do |j|
    part = S[i, M].map { _1[j, M] }.flatten
    kinds << part
  end
end

p kinds.size
