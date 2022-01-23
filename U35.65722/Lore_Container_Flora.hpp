#ifndef UE4SS_SDK_Lore_Container_Flora_HPP
#define UE4SS_SDK_Lore_Container_Flora_HPP

class ULore_Container_Flora_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar2;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_0;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_1;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_2;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_3;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_4;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_5;
    class ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_6;
    class UWrapBox* WrapBox_IconHolder;

    void SetBiome(const class UBiome* Biome);
    void SetCaveFlora();
    void ExecuteUbergraph_Lore_Container_Flora(int32 EntryPoint, const class UBiome* K2Node_CustomEvent_Biome);
};

#endif
