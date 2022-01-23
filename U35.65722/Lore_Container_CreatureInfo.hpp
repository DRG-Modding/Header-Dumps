#ifndef UE4SS_SDK_Lore_Container_CreatureInfo_HPP
#define UE4SS_SDK_Lore_Container_CreatureInfo_HPP

class ULore_Container_CreatureInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C;
    class UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C_0;
    class UBasic_BG_CutCorner_C* Basic_BG_Window_C_0;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UHorizontalBox* HBox_Armor;
    class UHorizontalBox* HBox_Attack;
    class UHorizontalBox* HBox_Attack_Enemy2;
    class UHorizontalBox* HBox_Family;
    class UHorizontalBox* HBox_Special;
    class UHorizontalBox* HBox_Type;
    class UHorizontalBox* HBox_Weakpoint;
    class ULore_InfoBox_C* InfoBox_Armor;
    class ULore_InfoBox_C* InfoBox_Family;
    class ULore_InfoBox_C* InfoBox_Type;
    class ULore_InfoBox_C* InfoBox_Weakpoints;
    class USizeBox* SizeBox_3;
    class UTextBlock* Text_Attack;
    class UTextBlock* Text_Attack_enemy2;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_Header;
    class UWrapBox* WrapBox_Attacks;
    class UWrapBox* WrapBox_Attacks_Enemy2;
    class UWrapBox* WrapBox_SpecialAttacks;
    FText TempText;
    class UMinersManual* MinersManual;
    class UEnemyID* TwinID;
    float BoxPadding;

    void TwinsCustomAttack(class UEnemyMinersManualData* enemy, FText Temp_text_Variable, int32 CallFunc_Array_Length_ReturnValue, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, class ULore_InfoBoxAttack_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FEnemyAttackDescription CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FMargin K2Node_MakeStruct_Margin, EEnemyAttackType Temp_byte_Variable, FDamageTypeDescription K2Node_MakeStruct_DamageTypeDescription, bool Temp_bool_Variable, FText K2Node_Select_Default, FText CallFunc_TextToUpper_ReturnValue, FDamageTypeDescription CallFunc_GetDamageTypeDescription_icon, bool Temp_bool_Variable_1, FDamageTypeDescription K2Node_Select_Default_1, class UWrapBox* K2Node_Select_Default_2, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
    void GetTypeText(EEnemyType InType, FText& DisplayText, class UTexture2D*& Icon, bool K2Node_SwitchEnum_CmpSuccess);
    void SetData(class UEnemyMinersManualData* Creature, class UMinersManual* MinersManual);
    void FillInAttacks(class UWrapBox* Container, const TArray<FEnemyAttackDescription>& Attacks);
    void ExecuteUbergraph_Lore_Container_CreatureInfo(int32 EntryPoint, bool Temp_bool_Variable, FMargin K2Node_MakeStruct_Margin, class ULore_InfoBox_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UEnemyMinersManualData* K2Node_CustomEvent_Creature, class UMinersManual* K2Node_CustomEvent_MinersManual, FText CallFunc_GetArmorTypeInfo_Display_Text, class UTexture2D* CallFunc_GetArmorTypeInfo_Icon, FLinearColor CallFunc_GetArmorTypeInfo_Color, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon, FText CallFunc_GetEnemyTypeInfo_Display_Text, class UTexture2D* CallFunc_GetEnemyTypeInfo_Icon, FLinearColor CallFunc_GetEnemyTypeInfo_IconColor, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon_1, const FGuid CallFunc_GetSaveGameID_ReturnValue, FText Temp_text_Variable, FText CallFunc_GetEnemyFamilyInfo_Name, class UTexture2D* CallFunc_GetEnemyFamilyInfo_Icon, FLinearColor CallFunc_GetEnemyFamilyInfo_Color, FObjectiveMissionIcon K2Node_MakeStruct_ObjectiveMissionIcon_2, class UWrapBox* K2Node_CustomEvent_Container, const TArray<FEnemyAttackDescription>& K2Node_CustomEvent_Attacks, FText Temp_text_Variable_1, FEnemyAttackDescription CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FDamageTypeDescription CallFunc_GetDamageTypeDescription_icon, FText Temp_text_Variable_4, FDamageTypeDescription K2Node_MakeStruct_DamageTypeDescription, FDamageTypeDescription K2Node_Select_Default, EEnemyAttackType Temp_byte_Variable, FText CallFunc_GetEmptyText_ReturnValue, FText K2Node_Select_Default_1, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_GetEmptyText_ReturnValue_1, FText CallFunc_GetEmptyText_ReturnValue_2, FText CallFunc_GetEmptyText_ReturnValue_3, FText CallFunc_GetEmptyText_ReturnValue_4, class ULore_InfoBoxAttack_C* CallFunc_Create_ReturnValue_1, const FGuid CallFunc_GetSaveGameID_ReturnValue_1, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_1);
};

#endif
