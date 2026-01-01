# frozen_string_literal: true

N, M = gets.split.map(&:to_i)

N.times { puts _1 + 1 <= M ? 'OK' : 'Too Many Requests' }

# require 'benchmark'

# N, M = gets.split.map(&:to_i)

# Benchmark.bm do |x|
#   x.report { N.times { puts _1 + 1 <= M ? 'OK' : 'Too Many Requests' } }
#   x.report { N.times { |a| puts a + 1 < M ? 'OK' : 'Too Many Requests' } }
# end
#
# ===================================
#
# $ ruby "/Users/yanagisawakai/Documents/atcoder/ABC429/a.rb"
# 5 3
#        user     system      total        real
#  OK
# OK
# OK
# Too Many Requests
# Too Many Requests
#   0.000039   0.000069   0.000108 (  0.000090)
#  OK
# OK
# Too Many Requests
# Too Many Requests
# Too Many Requests
#   0.000012   0.000010   0.000022 (  0.000021)
