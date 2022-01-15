#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP

class UTOOLTIP_ServerEntry_Biome_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UImage* BiomeImage;
    UTextBlock* BiomeName;
    UVerticalBox* ContentBox;
    UImage* PlanetZoneImage;
    URichTextSizable* ShowProfileText;
    FSlateFontInfo ResourceFont;
    UBiome* Biome;

    void SetData(UBiome* InBiome, UResourceData* Resource, UHorizontalBox* Line, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, FText CallFunc_TextToUpper_ReturnValue, UTextBlock* CallFunc_CreateTextBlock_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, UTextBlock* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, UImage* CallFunc_CreateImageSized_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
