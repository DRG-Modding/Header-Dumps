#ifndef UE4SS_SDK_Lore_Container_Flora_HPP
#define UE4SS_SDK_Lore_Container_Flora_HPP

class ULore_Container_Flora_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar2;
    UBasic_Window_CutCorner_C* Basic_Window;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_0;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_1;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_2;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_3;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_4;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_5;
    ULore_Content_Itm_Flora_C* Lore_Content_Generic_Image_C_6;
    UWrapBox* WrapBox_IconHolder;

    void SetBiome(const UBiome* Biome);
    void SetCaveFlora();
    void ExecuteUbergraph_Lore_Container_Flora(int32 EntryPoint, const UBiome* K2Node_CustomEvent_Biome);
}

#endif
