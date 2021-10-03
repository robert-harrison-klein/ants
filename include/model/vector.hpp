#ifndef VECTOR_H
#define VECTOR_H

namespace Ants {
namespace Model {

template <typename T> struct Vector2 {
  T x;
  T y;
};

template <typename T>
Vector2<T> operator+(const Vector2<T> &lhs, const Vector2<T> &rhs);
template <typename T>
Vector2<T> &operator+=(Vector2<T> &lhs, const Vector2<T> &rhs);

template <typename T>
Vector2<T> operator-(const Vector2<T> &lhs, const Vector2<T> &rhs);
template <typename T>
Vector2<T> &operator-=(Vector2<T> &lhs, const Vector2<T> &rhs);

template <typename T>
Vector2<T> operator*(const Vector2<T> &lhs, const Vector2<T> &rhs);
template <typename T>
Vector2<T> &operator*=(Vector2<T> &lhs, const Vector2<T> &rhs);

template <typename T>
Vector2<T> operator/(const Vector2<T> &lhs, const Vector2<T> &rhs);
template <typename T>
Vector2<T> &operator/=(Vector2<T> &lhs, const Vector2<T> &rhs);

template <typename T> Vector2<T> operator+(const Vector2<T> &lhs, const T &rhs);
template <typename T> Vector2<T> operator+=(Vector2<T> &lhs, const T &rhs);

template <typename T> Vector2<T> operator-(const Vector2<T> &lhs, const T &rhs);
template <typename T> Vector2<T> operator-=(Vector2<T> &lhs, const T &rhs);

template <typename T> Vector2<T> operator*(const Vector2<T> &lhs, const T &rhs);
template <typename T> Vector2<T> operator*=(Vector2<T> &lhs, const T &rhs);

template <typename T> Vector2<T> operator/(const Vector2<T> &lhs, const T &rhs);
template <typename T> Vector2<T> operator/=(Vector2<T> &lhs, const T &rhs);

template <typename T>
bool operator==(const Vector2<T> &lhs, const Vector2<T> &rhs);
template <typename T>
bool operator!=(const Vector2<T> &lhs, const Vector2<T> &rhs);

} // namespace Model
} // namespace Ants

#endif // VECTOR_H
