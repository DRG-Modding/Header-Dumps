#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP

class UTOOLTIP_ServerEntry_Biome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UImage* BiomeImage;
    class UTextBlock* BiomeName;
    class UVerticalBox* ContentBox;
    class UImage* PlanetZoneImage;
    class URichTextSizable* ShowProfileText;
    FSlateFontInfo ResourceFont;
    class UBiome* Biome;

    void SetData(class UBiome* InBiome, class UResourceData* Resource, class UHorizontalBox* Line, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FMargin K2Node_MakeStruct_Margin, FText CallFunc_TextToUpper_ReturnValue, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UTextBlock* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, class UImage* CallFunc_CreateImageSized_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FResourceSpawner CallFunc_Array_Get_Item, class UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
