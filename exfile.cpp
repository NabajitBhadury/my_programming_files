class Box
{
private:
    int length, breadth, height;
    // long long volume;

public:
    Box()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }

    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    Box(Box &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
        height = obj.height;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int getHeight()
    {
        return height;
    }

    long long CalculateVolume()
    {
        return (long long)length * height * breadth;
    }
    friend ostream &operator<<(ostream &os, Box b);
    friend bool operator<(Box a, Box b);
};

ostream &operator<<(ostream &os, Box b)
{
    os << b.length << " ";
    os << b.breadth << " ";
    os << b.height;

    return os;
}

bool operator<(Box a, Box b)
{
    return (a.getLength()<b.getLength()) || ((a.getLength()==b.getLength()) && (a.getBreadth()<b.getBreadth())) || (((a.getLength()==b.getLength()) && (a.getBreadth()==b.getBreadth())) && (a.getHeight()<b.getHeight()));
}