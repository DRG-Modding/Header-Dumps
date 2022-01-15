#ifndef UE4SS_SDK_OnScreen_SentryDistance_HPP
#define UE4SS_SDK_OnScreen_SentryDistance_HPP

class UOnScreen_SentryDistance_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall;
    UHUD_DefaultLabel_C* Distance;
    AActor* Target;
    AActor* Destination;

    void Set End Points(AActor* Target, AActor* Destination);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_OnScreen_SentryDistance(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, AActor* K2Node_CustomEvent_Target, AActor* K2Node_CustomEvent_Destination, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
