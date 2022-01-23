#ifndef UE4SS_SDK_ITM_SegmentedArmorBar_HPP
#define UE4SS_SDK_ITM_SegmentedArmorBar_HPP

class UITM_SegmentedArmorBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_3;
    class UImage* ICON_Armor;
    class UITM_HealthBarSection_C* ITM_HealthBarSection1;
    class UITM_HealthBarSection_C* ITM_HealthBarSection2;
    class UITM_HealthBarSection_C* ITM_HealthBarSection3;
    class UHorizontalBox* SegmentHolder;
    class AActor* enemy;
    class UEnemyHealthComponent* EnemyHealth;
    TArray<class UITM_HealthBarSection_C*> Sections;
    TArray<class USubHealthComponent*> SubHealthComps;

    void SetData(class AActor* ArmoredEnemy, class UEnemyHealthComponent* EnemyHealth);
    void AddSection(bool AddLeftPadding, class USubHealthComponent* Health);
    void PreConstruct(bool IsDesignTime);
    void SetInvulnerability(bool IsInvulnerability);
    void OnSubHealthDamageTaken(float Health);
    void OnSubHealthCanTakeDamage(class USubHealthComponent* subHealth);
    void ExecuteUbergraph_ITM_SegmentedArmorBar(int32 EntryPoint, FExecuteUbergraph_ITM_SegmentedArmorBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_SegmentedArmorBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_ArmoredEnemy, class UEnemyHealthComponent* K2Node_CustomEvent_EnemyHealth, FSlateChildSize K2Node_MakeStruct_SlateChildSize, TArray<class UDestructibleSubHealthComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UITM_HealthBarSection_C* CallFunc_Create_ReturnValue, class USubHealthComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool K2Node_CustomEvent_AddLeftPadding, class USubHealthComponent* K2Node_CustomEvent_health_1, bool K2Node_Event_IsDesignTime, bool CallFunc_GetCanTakeDamage_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FMargin K2Node_MakeStruct_Margin, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool K2Node_CustomEvent_IsInvulnerability, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_health, const FLinearColor Temp_struct_Variable, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class USubHealthComponent* CallFunc_Array_Get_Item_2, class USubHealthComponent* K2Node_CustomEvent_subHealth, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_GetCanTakeDamage_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, class UITM_HealthBarSection_C* CallFunc_Array_Get_Item_3);
};

#endif
