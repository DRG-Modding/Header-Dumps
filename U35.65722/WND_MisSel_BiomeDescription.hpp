#ifndef UE4SS_SDK_WND_MisSel_BiomeDescription_HPP
#define UE4SS_SDK_WND_MisSel_BiomeDescription_HPP

class UWND_MisSel_BiomeDescription_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar;
    class UBasic_Menu_ColorBar_C* BasicWindow_ColorBar_0;
    class UTextBlock* BiomeDescription;
    class UBlurBackground_C* BlurBackground;
    class UTextBlock* DATA_headerText;
    class UHorizontalBox* hboxBiomeResources;
    class UTextBlock* Header_BiomeDescription;
    class UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Abundant;
    class UITM_MisSel_ResourceIcon_C* ITEM_MissionSelection_ResourceIcon_Scarce;
    class UShadowBG_C* ShadowBG;
    class UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    class UBiome* Biome;

    void SetData(class UBiome* Biome);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WND_MisSel_BiomeDescription(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetBiomeWorldMap_ReturnValue, ESlateVisibility K2Node_Select_Default, const FText CallFunc_GetBiomeName_ReturnValue, class UBiome* K2Node_CustomEvent_Biome, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor);
};

#endif
