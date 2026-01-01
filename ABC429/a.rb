# frozen_string_literal: true

N, M = gets.split.map(&:to_i)

N.times { puts _1 + 1 <= M ? 'OK' : 'Too Many Requests' }
