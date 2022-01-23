#ifndef UE4SS_SDK_UI_AdvancedLabel_HPP
#define UE4SS_SDK_UI_AdvancedLabel_HPP

class UUI_AdvancedLabel_C : public UFSDAdvancedLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Lines;
    FSlateFontInfo Font;
    class UHorizontalBox* CurrentLine;
    int32 Icon Size;
    FLinearColor Text Tint;
    FLinearColor Key Name Tint;
    FLinearColor PC  Icon Tint;
    FLinearColor Controller Icon Tint;
    int32 Icon Size_ControllerOverride;
    FLinearColor Shadow Color;
    FVector2D Shadow Offset;

    void SetFont(FSlateFontInfo InFont, bool InKeepFontSize);
    void SetIconSize(int32 Icon Size, int32 Icon Size_ControllerOverride);
    void SetFontSize(int32 Font Size, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo);
    void SetPreviewAs(uint8 PreviewAs, uint8 CallFunc_GetValidValue_ReturnValue);
    void SetTints(FLinearColor Text Tint, FLinearColor Key Name Tint, FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetKeyNameTint(FLinearColor Key Name Tint);
    void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetTextTint(FLinearColor Text Tint);
    void OnNewLine(int32 Index);
    void OnAddIcon(FString Name, const FActionIconMapping& Icon);
    void OnAddKeyName(FString Name);
    void OnAddString(FString Value);
    void OnReset();
    void ExecuteUbergraph_UI_AdvancedLabel(int32 EntryPoint, int32 K2Node_Event_Index, class UHorizontalBox* CallFunc_CreateHorizontalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FSlateChildSize K2Node_MakeStruct_SlateChildSize, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FString K2Node_Event_Name_1, const FActionIconMapping K2Node_Event_Icon, FString K2Node_Event_Name, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FString K2Node_Event_value, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FLinearColor Temp_struct_Variable, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_3, FString K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, class UTextBlock* CallFunc_CreateTextBlock_ReturnValue_1, FLinearColor K2Node_Select_Default_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default_3, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UImage* CallFunc_CreateImageSized_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2);
};

#endif
