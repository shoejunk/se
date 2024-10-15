export module se;
import std;

export namespace se
{
	template<typename T>
	using vector = std::vector<T>;
	template<typename T, size_t N>
	using array = std::array<T, N>;
	using string = std::string;
	using forward_iterator_tag = std::forward_iterator_tag;
	using input_iterator_tag = std::input_iterator_tag;
	using output_iterator_tag = std::output_iterator_tag;
	using random_access_iterator_tag = std::random_access_iterator_tag;
	using bidirectional_iterator_tag = std::bidirectional_iterator_tag;
	using iterator = std::iterator;
	using iterator_traits = std::iterator_traits;
	using ptrdiff_t = std::ptrdiff_t;
};
