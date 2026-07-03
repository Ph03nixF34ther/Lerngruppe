

class Messw
{
public:
        Messw()
        {
                Array = nullptr;
                int size = 0;
        }

        ~Messw() {
                delete[] Array;
        }

    private : double *Array;
        int size;

        Messw(int given_size)
        {
                size = given_size;
        }
};