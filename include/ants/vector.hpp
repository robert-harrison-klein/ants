#ifndef ANTS_VECTOR_HPP
#define ANTS_VECTOR_HPP

#include <type_traits>

namespace ants {

/**
 * A Vector2 represents a Vector with 2 elements.
 *
 * @tparam T the type of element stored in this vector.
 *
 * @warning T must be an arithmetic type.
 */
template <typename T> class Vector2 {
public:
  Vector2();
  Vector2(T x, T y);
  ~Vector2();

  T x;
  T y;
};

template <typename T> Vector2<T>::Vector2() : x(0), y(0) {
  static_assert(std::is_arithmetic<T>::value, "T must be arithemitic");
}

template <typename T> Vector2<T>::Vector2(T x, T y) : x(x), y(y) {
  static_assert(std::is_arithmetic<T>::value, "T must be arithmetic");
}

template <typename T> Vector2<T>::~Vector2() {}

template <typename T>
Vector2<T> operator+(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return Vector2<T>(lhs.x + rhs.x, lhs.y + rhs.y);
}

template <typename T>
Vector2<T> &operator+=(Vector2<T> &lhs, const Vector2<T> &rhs) {
  lhs.x += rhs.x;
  lhs.y += rhs.y;

  return lhs;
}

template <typename T>
Vector2<T> operator-(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return Vector2<T>(lhs.x - rhs.x, lhs.y - rhs.y);
}

template <typename T>
Vector2<T> &operator-=(Vector2<T> &lhs, const Vector2<T> &rhs) {
  lhs.x -= rhs.x;
  lhs.y -= rhs.y;

  return lhs;
}

template <typename T>
Vector2<T> operator*(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return Vector2<T>(lhs.x - rhs.x, lhs.y - rhs.y);
}

template <typename T>
Vector2<T> &operator*=(Vector2<T> &lhs, const Vector2<T> &rhs) {
  lhs.x *= rhs.x;
  lhs.y *= rhs.y;

  return lhs;
}

template <typename T>
Vector2<T> operator/(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return Vector2<T>(lhs.x / rhs.x, lhs.y / rhs.y);
}

template <typename T>
Vector2<T> &operator/=(Vector2<T> &lhs, const Vector2<T> &rhs) {
  lhs.x /= rhs.x;
  lhs.y /= rhs.y;

  return lhs;
}

template <typename T>
Vector2<T> operator+(const Vector2<T> &lhs, const T &rhs) {
  return Vector2<T>(lhs.x + rhs, lhs.y + rhs);
}

template <typename T> Vector2<T> &operator+=(Vector2<T> &lhs, const T &rhs) {
  lhs.x += rhs;
  lhs.y += rhs;

  return lhs;
}

template <typename T>
Vector2<T> operator-(const Vector2<T> &lhs, const T &rhs) {
  return Vector2<T>(lhs.x - rhs, lhs.y - rhs);
}

template <typename T> Vector2<T> &operator-=(Vector2<T> &lhs, const T &rhs) {
  lhs.x -= rhs;
  lhs.y -= rhs;

  return lhs;
}

template <typename T>
Vector2<T> operator*(const Vector2<T> &lhs, const T &rhs) {
  return Vector2<T>(lhs.x * rhs, lhs.y * rhs);
}

template <typename T> Vector2<T> &operator*=(Vector2<T> &lhs, const T &rhs) {
  lhs.x *= rhs;
  lhs.y *= rhs;

  return lhs;
}

template <typename T>
Vector2<T> operator/(const Vector2<T> &lhs, const T &rhs) {
  return Vector2<T>(lhs.x / rhs, lhs.y / rhs);
}

template <typename T> Vector2<T> &operator/=(Vector2<T> &lhs, const T &rhs) {
  lhs.x /= rhs;
  lhs.y /= rhs;

  return lhs;
}

template <typename T>
bool operator==(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

template <typename T>
bool operator!=(const Vector2<T> &lhs, const Vector2<T> &rhs) {
  return !(lhs == rhs);
}

} // namespace ants

#endif // ANTS_VECTOR_HPP
