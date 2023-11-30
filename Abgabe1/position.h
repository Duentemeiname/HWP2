struct koordinaten
{
    int x, y, z;
};


class position
{
    private:
        koordinaten aktuellePosition;
    
    public:
        void setPosition(int new_x, int new_y, int new_z);
        koordinaten getposition();
        position();
};

