#ifndef UE4SS_SDK_ITM_SegmentedHealthBar_HPP
#define UE4SS_SDK_ITM_SegmentedHealthBar_HPP

class UITM_SegmentedHealthBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_2;
    class UImage* ICON_Armor;
    class UITM_HealthBarSection_C* ITM_HealthBarSection1;
    class UITM_HealthBarSection_C* ITM_HealthBarSection2;
    class UITM_HealthBarSection_C* ITM_HealthBarSection3;
    class UHorizontalBox* SegmentHolder;
    class UHealthComponent* HealthComponent;
    TArray<class UITM_HealthBarSection_C*> Sections;
    bool IsSegmented;

    void SetData(class UHealthComponent* HealthComponent);
    void OnNewHealthSegment(int32 currSegment, int32 prevSegment);
    void PreConstruct(bool IsDesignTime);
    void AddSection(bool AddLeftPadding);
    void SetInvulnerability(bool IsInvulnerability);
    void OnHeal(float Amount);
    void OnDamage(float Amount);
    void ExecuteUbergraph_ITM_SegmentedHealthBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UHealthComponent* K2Node_CustomEvent_HealthComponent, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 K2Node_CustomEvent_currSegment, int32 K2Node_CustomEvent_prevSegment, FExecuteUbergraph_ITM_SegmentedHealthBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item, int32 CallFunc_GetCurrentHealthSegment_segment, float CallFunc_GetCurrentHealthSegment_segmentHealth, float CallFunc_GetCurrentHealthSegment_segmentHealthPercent, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_CustomEvent_AddLeftPadding, float CallFunc_SelectFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_2, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_3, bool CallFunc_GetCanTakeDamage_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool K2Node_CustomEvent_IsInvulnerability, float CallFunc_GetHealthPct_ReturnValue_1, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, FSlateChildSize K2Node_MakeStruct_SlateChildSize, class UITM_HealthBarSection_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const FLinearColor Temp_struct_Variable, float K2Node_CustomEvent_Amount_1, float K2Node_CustomEvent_Amount, FExecuteUbergraph_ITM_SegmentedHealthBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_SegmentedHealthBarK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GetCanTakeDamage_ReturnValue_1, int32 CallFunc_GetCurrentHealthSegment_segment_1, float CallFunc_GetCurrentHealthSegment_segmentHealth_1, float CallFunc_GetCurrentHealthSegment_segmentHealthPercent_1, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_LastIndex_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

#endif
