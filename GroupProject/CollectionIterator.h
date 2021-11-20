#ifndef COLLECTIONITERATOR_H
#define COLLECTIONITERATOR_H
template <typename Type>
class CollectionIterator 
{
protected:
    Type *ptr;

public:
    // using iterator_category = std::random_access_iterator_tag;
    // using value_type = Type;
    // using difference_type = std::ptrdiff_t;
    // using pointer = Type*;
    // using reference = Type&;

    CollectionIterator(){};
    CollectionIterator(Type *_ptr) { ptr = _ptr; };
    // CollectionIterator(CommuncationNode * _ptr){ ptr = _ptr;};
    Type &operator*() { return *ptr; };
    CollectionIterator<Type> &operator++()
    {
        ptr++;
        return *this;
    };
    CollectionIterator<Type> &operator--()
    {
        ptr--;
        return *this;
    };
    bool operator==(const CollectionIterator<Type> &r_ptr)
    {
        return (ptr == r_ptr.getPtr());
    };
    Type *getPtr() const { return ptr; }

    ~CollectionIterator(){};
};

#endif