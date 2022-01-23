#ifndef UE4SS_SDK_HUD_EscortMuleStatus_HPP
#define UE4SS_SDK_HUD_EscortMuleStatus_HPP

class UHUD_EscortMuleStatus_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OutOfFuel;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UProgressBar* FAKEFuelGauge_Left;
    class UImage* Icon_Fuel;
    class UImage* Icon_Fuel2;
    class UImage* Icon_Speed;
    class UImage* Image_Separator;
    class UITM_EscortMuleHealthBar_C* ITM_EscortMuleHealthBar;
    class UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus1;
    class UITM_FuelCannisterStatus_C* ITM_FuelCannisterStatus2;
    class UImage* speed1;
    class UImage* speed2;
    class UImage* speed3;
    class UImage* speed4;
    class UImage* speed5;
    class UTextBlock* TextBlock_StatusHeader;
    class UTextBlock* TextBlock_VehicleName;
    class UVerticalBox* VerticalBox_Fuel;
    class UWidgetSwitcher* WidgetSwitcher_Fuel;
    class UWidgetSwitcher* WidgetSwitcher_IsAlive;
    class UEscortObjective* EscortObj;
    float PrevHealth;
    EEscortMissionState prevState;
    TArray<float> SpeedThresholds;
    FTimerHandle UpdateFuelDisplayTimer;
    FVector StartPos;
    float EndPercentage;
    int32 NumberOfTakenExtractors;

    void CalcFuelGaugePercentage(float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetObjective(class UObjective* obj);
    void OnObjectiveUpdated(class UObjective* Objective);
    void OnSpeedChanged(float newSpeedModifier);
    void ExtracterTaken(class AExtractorItem* Item);
    void ExecuteUbergraph_HUD_EscortMuleStatus(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UObjective* K2Node_Event_obj, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UObjective* K2Node_CustomEvent_Objective, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FExecuteUbergraph_HUD_EscortMuleStatusK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_CustomEvent_newSpeedModifier, float CallFunc_Divide_FloatFloat_ReturnValue, FExecuteUbergraph_HUD_EscortMuleStatusK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_EscortMuleStatusK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_1, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UTexture2D* Temp_object_Variable, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FEscortMuleExtractorSlot CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class AExtractorItem* K2Node_CustomEvent_Item, bool CallFunc_ReadyForExtractor_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, int32 Temp_int_Variable_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FExecuteUbergraph_HUD_EscortMuleStatusK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class AExtractorItem*>& CallFunc_GetAllActorsOfClass_OutActors, class AExtractorItem* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2D* Temp_object_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, bool CallFunc_ReadyForExtractor_ReturnValue_1);
};

#endif
