namespace CNC_SIM::DataTypes{
    template <typename T>class Coordinates
    {
    public:
        Coordinates(/* args */);
        ~Coordinates();
        
    private:
        void convert_radian();
        void convert_degree();
        void convert_absolute();
        void convert_relative();
        std::vector<T> m_absolute_coordinates;
    };
} // namespace CNC_SIM
