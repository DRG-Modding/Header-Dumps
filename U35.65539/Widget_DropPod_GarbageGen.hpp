#ifndef UE4SS_SDK_Widget_DropPod_GarbageGen_HPP
#define UE4SS_SDK_Widget_DropPod_GarbageGen_HPP

class UWidget_DropPod_GarbageGen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_41;
    UScrollBox* ScrollBox_0;
    UTextBlock* TextBlock_0;
    float TimePassed;
    TArray<FString> Operations;
    bool NewOperation;
    int32 CurrentOperation;
    int32 Steps;
    int32 CurrentStep;
    float OperationDelay;

    void GetNewOperation(float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue);
    void DoOperation(FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, int32 Temp_int_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, FString Temp_string_Variable_4, FString Temp_string_Variable_5, FString Temp_string_Variable_6, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FString CallFunc_Conv_FloatToString_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 Temp_int_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText K2Node_Select_Default_1, FText CallFunc_MakeLiteralText_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_2, FString K2Node_Select_Default_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_GarbageGen(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_2, FText CallFunc_MakeLiteralText_ReturnValue_3, FString CallFunc_Conv_TextToString_ReturnValue_3, TArray<FString>& K2Node_MakeArray_Array);
}

#endif
