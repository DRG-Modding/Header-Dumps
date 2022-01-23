#ifndef UE4SS_SDK_ITEM_SpaceRig_ClassLevel_HPP
#define UE4SS_SDK_ITEM_SpaceRig_ClassLevel_HPP

class UITEM_SpaceRig_ClassLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UInvalidationBox* InvalidationBox_0;
    class USizeBox* SizeBox_3;
    class USpacer* Spacer_0;
    class UTextBlock* TextBlock_0;
    float IconSize;
    int32 FontSize;
    bool HideIcon;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SetLevel(int32 Level);
    void ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime, FSlateColor K2Node_MakeStruct_SlateColor, int32 K2Node_CustomEvent_Level, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FText CallFunc_Format_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, int32 K2Node_Select_Default, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, ESlateVisibility K2Node_Select_Default_1);
};

#endif
