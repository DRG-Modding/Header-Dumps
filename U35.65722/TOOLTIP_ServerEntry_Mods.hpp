#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Mods_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Mods_HPP

class UTOOLTIP_ServerEntry_Mods_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UImage* BiomeImage;
    class UTextBlock* BiomeName;
    class UVerticalBox* ContentBox;
    class UVerticalBox* ModsBox;
    class UVerticalBox* ModsInstalledBox;
    class UVerticalBox* ModsPendingBox;
    class UImage* PlanetZoneImage;
    class URichTextSizable* ShowProfileText;
    FSlateFontInfo ResourceFont;
    class UBiome* Biome;
    class UGeneratedMission* mission;
    TArray<FString> ModNames;
    FSlateFontInfo ModNameFont;

    void SplitByInstalled(TArray<FString>& InNames, TArray<FString>& OutPending, TArray<FString>& OutInstalled, TArray<FString> Pending, TArray<FString> Installed, FString Name, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, FString CallFunc_Array_Get_Item, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsModInstalledByIdOrName_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const TArray<FString>& K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue_1);
    void SetModNames(class UVerticalBox*& InBox, TArray<FString>& InNames, bool InInstalled, FSlateFontInfo AditionalFont, int32 MaxShown, FString Name, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UBasic_Label_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UITM_Modding_ToolTip_Entry_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, FMargin K2Node_MakeStruct_Margin, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetData(TArray<FString>& InModNames, class UGeneratedMission* InMission, TArray<FString> Installed, TArray<FString> Pending, class UResourceData* Resource, class UHorizontalBox* Line, FMargin K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FString>& CallFunc_SplitByInstalled_OutPending, TArray<FString>& CallFunc_SplitByInstalled_OutInstalled, bool CallFunc_IsValid_ReturnValue_1, FResourceSpawner CallFunc_Array_Get_Item, class UTexture2D* CallFunc_GetBiomeIcon_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue, class UImage* CallFunc_CreateImageSized_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, class UTextBlock* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, class UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, class UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Mods(int32 EntryPoint, TArray<FString>& K2Node_MakeArray_Array, bool K2Node_Event_IsDesignTime, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FString>& K2Node_MakeArray_Array_1);
};

#endif
