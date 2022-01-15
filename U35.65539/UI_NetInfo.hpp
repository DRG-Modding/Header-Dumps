#ifndef UE4SS_SDK_UI_NetInfo_HPP
#define UE4SS_SDK_UI_NetInfo_HPP

class UUI_NetInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* PktLossBox;
    UTextBlock* TextBlock_FPS;
    UTextBlock* TextBlock_Jitter;
    UTextBlock* TextBlock_Ping;
    UTextBlock* TextBlock_PktLoss_PlayerName;
    UTextBlock* TextBlock_PktLossIn;
    UTextBlock* TextBlock_PktLossOut;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    int32 NetInfoLevel;

    void GetPktLossString(FText& Names, FText& PktLossIn, FText& PktLossOut, FText& Ping, FText& Jitter, bool& IsValid, FText OutJitter, FText OutPing, FText OutPktlossOut, FText OutPktLossIn, FText OutNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, const TArray<FNetworkConnectionInfo>& CallFunc_GetConnectionInfo_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FNetworkConnectionInfo CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_5, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_6, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1, FText CallFunc_AsPercent_Float_ReturnValue, FText CallFunc_AsPercent_Float_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_7, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_8, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_3, FText CallFunc_Format_ReturnValue_2, FText CallFunc_Format_ReturnValue_3, FString CallFunc_GetPlayerName_Name, int32 CallFunc_Array_Length_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_9, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_4, FText CallFunc_Format_ReturnValue_4);
    void GetPlayerName(UFSDPlayerController* PlayerController, FString& Name, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FString CallFunc_GetPlayerName_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SlowTick();
    void OnNetInfoLevelChanged(int32 NewValue);
    void ExecuteUbergraph_UI_NetInfo(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, int32 CallFunc_GetShowNetInfoLevel_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_3, ESlateVisibility Temp_byte_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool CallFunc_IsServer_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetUiPing_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_4, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FText CallFunc_GetPktLossString_Names, FText CallFunc_GetPktLossString_PktLossIn, FText CallFunc_GetPktLossString_PktLossOut, FText CallFunc_GetPktLossString_Ping, FText CallFunc_GetPktLossString_Jitter, bool CallFunc_GetPktLossString_IsValid, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, Int32ConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 K2Node_CustomEvent_NewValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
