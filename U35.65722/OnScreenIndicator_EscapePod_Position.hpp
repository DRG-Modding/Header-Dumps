#ifndef UE4SS_SDK_OnScreenIndicator_EscapePod_Position_HPP
#define UE4SS_SDK_OnScreenIndicator_EscapePod_Position_HPP

class UOnScreenIndicator_EscapePod_Position_C : public UFSDInWorldWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataDistance;
    class UImage* Image_2;
    class ABP_DropPod_Escape_Base_C* DropPod;

    void GetDropPod(class ABP_DropPod_Escape_Base_C*& DropPod, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_DropPod_Escape_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_DropPod_Escape_Base_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void CustomEvent_0();
    void ExecuteUbergraph_OnScreenIndicator_EscapePod_Position(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FExecuteUbergraph_OnScreenIndicator_EscapePod_PositionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class ABP_DropPod_Escape_Base_C* CallFunc_GetDropPod_DropPod, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
