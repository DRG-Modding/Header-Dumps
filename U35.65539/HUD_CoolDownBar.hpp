#ifndef UE4SS_SDK_HUD_CoolDownBar_HPP
#define UE4SS_SDK_HUD_CoolDownBar_HPP

class UHUD_CoolDownBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Progress100;
    UImage* Progress25;
    UImage* Progress50;
    UImage* Progress75;
    TArray<UImage*> ProgressImages;
    UCoolDownItemAggregator* CoolDownAggregator;
    int32 OldProgress;
    int32 CurrentProgress;

    void Initialize(UCoolDownItemAggregator* CoolDown, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ProgressSound();
    void ExecuteUbergraph_HUD_CoolDownBar(int32 EntryPoint, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Variable, TArray<UImage*>& K2Node_MakeArray_Array, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetCoolDownProgress_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FLinearColor Temp_struct_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1);
}

#endif
