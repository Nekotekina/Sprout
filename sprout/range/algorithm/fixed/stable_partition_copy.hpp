/*=============================================================================
  Copyright (c) 2011-2014 Bolero MURAKAMI
  https://github.com/bolero-MURAKAMI/Sprout

  Distributed under the Boost Software License, Version 1.0. (See accompanying
  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef SPROUT_RANGE_ALGORITHM_FIXED_STABLE_PARTITION_COPY_HPP
#define SPROUT_RANGE_ALGORITHM_FIXED_STABLE_PARTITION_COPY_HPP

#include <sprout/config.hpp>
#include <sprout/container/functions.hpp>
#include <sprout/algorithm/fixed/results.hpp>
#include <sprout/algorithm/fixed/stable_partition_copy.hpp>

namespace sprout {
	namespace range {
		namespace fixed {
			//
			// stable_partition_copy
			//
			template<typename BidirectionalRange, typename Result, typename Predicate>
			inline SPROUT_CONSTEXPR typename sprout::fixed::results::algorithm<Result>::type
			stable_partition_copy(BidirectionalRange const& rng, Result const& result, Predicate pred) {
				return sprout::fixed::stable_partition_copy(sprout::begin(rng), sprout::end(rng), result, pred);
			}

			template<typename Result, typename BidirectionalRange, typename Predicate>
			inline SPROUT_CONSTEXPR typename sprout::fixed::results::algorithm<Result>::type
			stable_partition_copy(BidirectionalRange const& rng, Predicate pred) {
				return sprout::fixed::stable_partition_copy<Result>(sprout::begin(rng), sprout::end(rng), pred);
			}
		}	// namespace fixed

		using sprout::range::fixed::stable_partition_copy;
	}	// namespace range
}	// namespace sprout

#endif	// #ifndef SPROUT_RANGE_ALGORITHM_FIXED_STABLE_PARTITION_COPY_HPP
