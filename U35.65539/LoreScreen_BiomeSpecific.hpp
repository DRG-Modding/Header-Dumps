#ifndef UE4SS_SDK_LoreScreen_BiomeSpecific_HPP
#define UE4SS_SDK_LoreScreen_BiomeSpecific_HPP

class ULoreScreen_BiomeSpecific_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar3;
    ULore_Container_Text_W_Image_C* Feature0;
    ULore_Container_Text_W_Image_C* Feature1;
    UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon_2;
    UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon1;
    ULoreScreen_Template_C* LoreScreen_Template;
    URichTextBlock* RichTextBlock_BiomeDesc;
    UTextBlock* TextBlock_Headline;
    UBiome* Biome;
    bool IsHovering;
    UAudioComponent* HoverSound;
    TArray<UObject*> CaveObjects;
    TArray<UMinersManualData*> BiomeFeatures;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_BiomeSpecific(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetBiomeIndex_ReturnValue, TArray<UMinersManualData*>& CallFunc_GetBiomeFeatures_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UMinersManualData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
