#ifndef STRUCTBIND2_HPP
#define STRUCTBIND2_HPP

#include "customer2.hpp"
#include <utility> // for tuple-like API

template<>
struct std::tuple_size<Customer> {
    static constexpr int value = 3;
};

template<>
struct std::tuple_element<2, Customer> {
    using type= long;
};
template<std::size_t Idx>
struct std::tuple_element<Idx, Customer> {
    using type= std::string;
};

template<std::size_t I> decltype(auto) get(Customer& c) {
    static_assert(I < 3);
    if constexpr (I == 0) {
	return c.firstname();
    } else if constexpr (I == 1) {
	return c.lastname();
    } else {
	return c.value();
    }
}
template<std::size_t I> decltype(auto) get(const Customer& c) {
    static_assert(I < 3);
    if constexpr (I == 0) {
	return c.firstname();
    } else if constexpr (I == 1) {
	return c.lastname();
    } else {
	return c.value();
    }
}
template<std::size_t I> decltype(auto) get(Customer&& c) {
    static_assert(I < 3);
    if constexpr (I == 0) {
	return std::move(c.firstname());
    } else if constexpr (I == 1) {
	return std::move(c.lastname());
    } else {
	return c.value();
    }
}

#endif // STRUCTBIND2_HPP
