#ifndef UE4SS_SDK_WND_MisSel_BiomeDescription_HPP
#define UE4SS_SDK_WND_MisSel_BiomeDescription_HPP

class UWND_MisSel_BiomeDescription_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar;
    UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_0;
    UTextBlock* BiomeDescription;
    UBlurBackground_C* BlurBackground;
    UTextBlock* DATA_headerText;
    UHorizontalBox* hboxBiomeResources;
    UTextBlock* Header_BiomeDescription;
    UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Abundant;
    UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Scarce;
    UShadowBG_C* ShadowBG;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    UBiome* Biome;

    void SetData(UBiome* Biome);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WND_MisSel_BiomeDescription(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UTexture2D* CallFunc_GetBiomeWorldMap_ReturnValue, ESlateVisibility K2Node_Select_Default, const FText CallFunc_GetBiomeName_ReturnValue, UBiome* K2Node_CustomEvent_Biome, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
