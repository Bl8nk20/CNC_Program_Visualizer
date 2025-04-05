#include <string>
#include <optional>

namespace CNC_SIM::DataTypes{
    
    class Material_Information
    {
    public:
        // constructor
        /**
         * @brief Construct a new Material_Information object
         * 
         */
        Material_Information();

        /**
         * @brief Construct a new Material_Information object
         * 
         * @param material_name 
         * @param density 
         * @param recommended_v_f 
         * @param recommended_v_c 
         */
        Material_Information(const std::string& material_name, const float& density, const std::optional<int>& recommended_v_f, const std::optional<int>& recommended_v_c);
        
        /**
         * @brief Destroy the Material_Information object
         * 
         */
        ~Material_Information();        
        
        // getter

        /**
         * @brief Get the Material Name object
         * 
         * @return std::string 
         */
        std::string get_Material_Name();
        /**
         * @brief Get the Density object
         * 
         * @return float 
         */
        float get_Density();
        /**
         * @brief Get the Recommended Vf object
         * 
         * @return int 
         */
        int get_Recommended_Vf();
        /**
         * @brief Get the Recommended Vc object
         * 
         * @return int 
         */
        int get_Recommended_Vc();

        // Setter
        /**
         * @brief Set the Material Name object
         * 
         * @param material_name 
         */
        void set_Material_Name(const std::string& material_name);
        /**
         * @brief Set the Density object
         * 
         * @param density 
         */
        void set_Density(const float& density);
        /**
         * @brief Set the Recommended Vf object
         * 
         * @param recommended_vf 
         */
        void set_Recommended_Vf(const int& recommended_vf);
        /**
         * @brief Set the Recommended Vc object
         * 
         * @param recommended_vc1 
         */
        void set_Recommended_Vc(const int& recommended_vc1);
        
    private:
        static const std::string material_name;
        static const float density;
        static const int recommended_v_f; // Vorschub
        static const int recommended_v_c; // Schnittgeschwindigkeit
    };
} // namespace CNC_SIM
