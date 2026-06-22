#include "stack.hpp"

void Stack::Push(int value) { data_.push_back(value); }

int Stack::Pop() {
  const int result = data_.back();
  data_.pop_back();
  return result;
}

void MinStack::Push(int value) {
  data_.push_back(value);
  if (minimums_.empty() || value <= minimums_.back()) {
    minimums_.push_back(value);
  }
}

int MinStack::Pop() {
  const int result = data_.back();
  data_.pop_back();
  if (result == minimums_.back()) {
    minimums_.pop_back();
  }
  return result;
}

int MinStack::GetMin() { return minimums_.back(); }
