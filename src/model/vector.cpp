#include "model/vector.hpp"

#include <type_traits>

namespace ants {
namespace model {

template <typename T> Vector2<T>::Vector2() {
  static_assert(std::is_arithmetic<T>::value, "T must be arithemitic");
}

template <typename T> Vector2<T>::Vector2(T x, T y) {
  static_assert(std::is_arithmetic<T>::value, "T must be arithmetic");

  this->x = x;
  this->y = y;
}

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
  return !lhs == rhs;
}

} // namespace model
} // namespace ants
