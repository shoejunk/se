export module se;
import std;

export namespace se
{
	// Containers
	template<typename T>
	using vector = std::vector<T>;
	template<typename T, size_t N>
	using array = std::array<T, N>;
	template<typename T>
	using deque = std::deque<T>;
	template<typename T>
	using list = std::list<T>;
	template<typename Key, typename T>
	using map = std::map<Key, T>;
	template<typename Key, typename T, typename Hash = std::hash<Key>>
	using unordered_map = std::unordered_map<Key, T, Hash>;
	template<typename T>
	using set = std::set<T>;
	template<typename T>
	using unordered_set = std::unordered_set<T>;
	template<typename T>
	using stack = std::stack<T>;
	template<typename T>
	using queue = std::queue<T>;
	template<typename T, size_t N>
	constexpr size_t array_size(T(&)[N]) { return N; }
	using std::begin;
	using std::end;
	using std::size;
	using std::empty;
	using std::data;

	// Smart Pointers
	template<typename T>
	using unique_ptr = std::unique_ptr<T>;
	template<typename T>
	using shared_ptr = std::shared_ptr<T>;
	template<typename T>
	using weak_ptr = std::weak_ptr<T>;
	using std::make_shared;
	using std::make_unique;
	using std::dynamic_pointer_cast;
	using std::static_pointer_cast;
	using std::const_pointer_cast;

	// Strings
	using string = std::string;
	using string_view = std::string_view;
	using wstring = std::wstring;
	using std::strcmp;
	using std::strlen;
	using std::strcpy;
	using std::strncpy;
	using std::strcat;
	using std::strncat;
	using std::memcpy;
	using std::memset;
	using std::memmove;
	using std::atoi;
	using std::atof;
	using std::atol;
	using std::atoll;
	using std::strtol;
	using std::strtoul;
	using std::strtoll;
	using std::strtoull;
	using std::strtof;
	using std::strtod;
	using std::strtold;
	using std::to_string;
	using std::stoi;
	using std::stof;
	using std::stod;
	using std::stold;

	// Type Traits
	template<typename T1, typename T2>
	using is_same = std::is_same<T1, T2>;
	template<typename T>
	using remove_const = std::remove_const<T>;
	template<typename T>
	using decay = std::decay<T>;
	template<typename T>
	using is_integral = std::is_integral<T>;
	template<typename T>
	inline constexpr bool is_integral_v = std::is_integral_v<T>;
	template<typename T>
	using is_floating_point = std::is_floating_point<T>;
	template<typename T>
	inline constexpr bool is_floating_point_v = std::is_floating_point_v<T>;
	using std::remove_cv;
	using std::remove_reference;
	using std::remove_pointer;
	using std::add_pointer;
	using std::make_signed;
	using std::make_unsigned;

	// Iterator Support
	using std::iterator_traits;
	using std::input_iterator_tag;
	using std::output_iterator_tag;
	using std::forward_iterator_tag;
	using std::bidirectional_iterator_tag;
	using std::random_access_iterator_tag;
	using std::input_or_output_iterator;
	using std::input_iterator;
	using std::output_iterator;
	using std::forward_iterator;
	using std::bidirectional_iterator;
	using std::random_access_iterator;

	// Integer Types
	using int8_t = std::int8_t;
	using uint8_t = std::uint8_t;
	using int16_t = std::int16_t;
	using uint16_t = std::uint16_t;
	using int32_t = std::int32_t;
	using uint32_t = std::uint32_t;
	using int64_t = std::int64_t;
	using uint64_t = std::uint64_t;
	using size_t = std::size_t;
	using ptrdiff_t = std::ptrdiff_t;

	// Utilities
	using nullptr_t = std::nullptr_t;
	template<typename T>
	using optional = std::optional<T>;
	template<typename... Ts>
	using variant = std::variant<Ts...>;
	using std::initializer_list;
	using std::pair;
	using std::tuple;
	using std::index_sequence;
	using std::make_index_sequence;
	using std::index_sequence_for;

	// Common Functions
	using std::move;
	using std::forward;
	using std::swap;
	using std::min;
	using std::max;

	// Thread Support
	using thread = std::thread;
	using mutex = std::mutex;
	template<typename T>
	using lock_guard = std::lock_guard<T>;
	template<typename T>
	using unique_lock = std::unique_lock<T>;
	template<typename T>
	using atomic = std::atomic<T>;

	// I/O Streams
	using iostream = std::iostream;
	using istream = std::istream;
	using ostream = std::ostream;
	using fstream = std::fstream;
	using ifstream = std::ifstream;
	using ofstream = std::ofstream;
	using stringstream = std::stringstream;

	// Time Utilities
	template<typename Rep, typename Period = std::ratio<1>>
	using duration = std::chrono::duration<Rep, Period>;
	template<typename Clock, typename Duration = typename Clock::duration>
	using time_point = std::chrono::time_point<Clock, Duration>;
	using system_clock = std::chrono::system_clock;
	using steady_clock = std::chrono::steady_clock;

	// Random
	using random_device = std::random_device;
	using mt19937 = std::mt19937;
	template<typename T>
	using uniform_int_distribution = std::uniform_int_distribution<T>;
	template<typename T>
	using uniform_real_distribution = std::uniform_real_distribution<T>;

	// Formatting
	template<typename... Args>
	using format_string = std::format_string<Args...>;
	using std::format;
	using std::formatter;
	using std::basic_format_string;
	using std::basic_format_parse_context;
	using std::basic_format_context;
	using std::format_to;
	using std::format_to_n;
	using std::formatted_size;
	using std::format_error;
	using std::format_args;
	using std::make_format_args;
	using std::vformat;
	using std::vformat_to;

	// Algorithms
	using std::remove;
	using std::find;
	using std::find_if;
	using std::find_if_not;
	using std::count;
	using std::count_if;
	using std::copy;
	using std::copy_if;
	using std::transform;
	using std::replace;
	using std::replace_if;
	using std::fill;
	using std::generate;
	using std::sort;
	using std::stable_sort;
	using std::lower_bound;
	using std::upper_bound;
	using std::binary_search;
	using std::for_each;
	using std::all_of;
	using std::any_of;
	using std::none_of;
	using std::equal;
	using std::accumulate;
	using std::distance;
	using std::advance;
	using std::next;
	using std::prev;
	using std::begin;
	using std::end;
	using std::rbegin;
	using std::rend;

	// I/O manipulators
	using std::endl;
	using std::flush;
	using std::hex;
	using std::dec;
	using std::oct;
	using std::fixed;
	using std::scientific;
	using std::setw;
	using std::setfill;
	using std::setprecision;
	using std::quoted;

	// Console objects
	using std::cout;
	using std::cerr;
	using std::clog;
	using std::cin;

	// Numeric Limits
	template<typename T>
	using numeric_limits = std::numeric_limits<T>;

	// Math Constants
	namespace numbers = std::numbers;
	using std::numbers::pi;
	using std::numbers::pi_v;
	using std::numbers::e;
	using std::numbers::e_v;

	// Mathematical Functions
	using std::abs;
	using std::sin;
	using std::cos;
	using std::tan;
	using std::asin;
	using std::acos;
	using std::atan;
	using std::atan2;
	using std::sinh;
	using std::cosh;
	using std::tanh;
	using std::exp;
	using std::log;
	using std::log10;
	using std::pow;
	using std::sqrt;
	using std::ceil;
	using std::floor;
	using std::round;
	using std::fmod;
	template<std::intmax_t Num, std::intmax_t Denom = 1>
	using ratio = std::ratio<Num, Denom>;

	// Comparison Operations
	using std::min;
	using std::max;
	using std::clamp;
	using std::less;
	using std::greater;
	using std::equal_to;

	// Exception Handling
	using exception = std::exception;
	using runtime_error = std::runtime_error;
	using logic_error = std::logic_error;
	using out_of_range = std::out_of_range;
	using invalid_argument = std::invalid_argument;

	// Concepts
	using std::constructible_from;
	using std::convertible_to;
	using std::same_as;
	using std::derived_from;
	using std::integral;
	using std::floating_point;
	using std::assignable_from;
	using std::movable;
	using std::swappable;
};
