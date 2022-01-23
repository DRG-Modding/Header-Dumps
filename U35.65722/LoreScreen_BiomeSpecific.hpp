#ifndef UE4SS_SDK_LoreScreen_BiomeSpecific_HPP
#define UE4SS_SDK_LoreScreen_BiomeSpecific_HPP

class ULoreScreen_BiomeSpecific_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar3;
    class ULore_Container_Text_W_Image_C* Feature0;
    class ULore_Container_Text_W_Image_C* Feature1;
    class UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon_2;
    class UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon1;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextBlock* RichTextBlock_BiomeDesc;
    class UTextBlock* TextBlock_Headline;
    class UBiome* Biome;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    TArray<class UObject*> CaveObjects;
    TArray<class UMinersManualData*> BiomeFeatures;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_BiomeSpecific(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchInteger_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetBiomeIndex_ReturnValue, TArray<class UMinersManualData*>& CallFunc_GetBiomeFeatures_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMinersManualData* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
