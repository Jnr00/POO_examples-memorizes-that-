class Product {
  private:
    string name;
    double price;
    int stock;

  public:
    // Constructor
    Product(string name, double price, int stock) {
      this->name = name;
      this->price = price;
      this->stock = stock;
    }

    // Methods
    string getName() {
      return name;
    }

    double getPrice() {
      return price;
    }

    int getStock() {
      return stock;
    }

    void setStock(int stock) {
      this->stock = stock;
    }
};
