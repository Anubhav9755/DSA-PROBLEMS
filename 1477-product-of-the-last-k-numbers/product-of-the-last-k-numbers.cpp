class ProductOfNumbers
{
    vector<int> list;
public:
    ProductOfNumbers() { } 
    void add(int num)
    {
        list.push_back(num); 
    }

    int getProduct(int k)
    {
        if (k > list.size())
        { 
            return 0;
        }
        int product = 1;
        
        for (int i = list.size() - k; i < list.size(); i++)
        { 
            product *= list[i]; 
        }
        return product; 
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */