class Book : public Product {
  private:
    string author;
    int pages;

  public:
    // Constructor
    Book(string name, double price, int stock, string author, int pages)
      : Product(name, price, stock) {
      this->author = author;
      this->pages = pages;
    }

    // Methods
    string getAuthor() {
      return author;
    }

    int getPages() {
      return pages;
    }
};
