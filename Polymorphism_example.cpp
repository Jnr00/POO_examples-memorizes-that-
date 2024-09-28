class Shape {
  public:
    virtual void draw() = 0;
};

class Circle : public Shape {
  public:
    void draw() {
      cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
  public:
    void draw() {
      cout << "Drawing a rectangle." << endl;
    }
};

int main() {
  Shape* shape = new Circle();
  shape->draw(); // Output: Drawing a circle.

  shape = new Rectangle();
  shape->draw(); // Output: Drawing a rectangle.

  return 0;
}
