#ifndef UE4SS_SDK_LoreScreen_Creatures_HPP
#define UE4SS_SDK_LoreScreen_Creatures_HPP

class ULoreScreen_Creatures_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CreatureFadeOut;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox_116;
    class UImage* CreatureImage;
    class UHorizontalBox* HorizontalBox_KillCount;
    class UImage* Image_crosshair01;
    class UImage* Image_crosshair2;
    class UITM_DragRotateCharacterShowroom_C* ITM_DragRotateCharacterShowroom;
    class ULore_Container_CombatTip_C* Lore_Container_CombatTip;
    class ULore_Container_CombatTip_C* Lore_Container_CombatTip_160;
    class ULore_Container_CreatureInfo_C* Lore_Content_Container_CreatureInfo;
    class ULore_Content_Statistics_C* Lore_Content_Statistics;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextSizable* RichTextSizable_Description;
    class USizeBox* SizeBox_Description;
    class UTextBlock* TextBlock_Kills;
    class UVerticalBox* VerticalBox_Hints;
    class UEnemyMinersManualData* enemy;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    class UMaterialInstanceDynamic* CreatureDynMat;
    bool IsRotatingLeft;
    class UEnemyID* TwinID;

    void Construct();
    void RefreshContent();
    void RefreshCreature();
    void FadeOutFinished();
    void ShowCreature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_LoreScreen_Creatures(int32 EntryPoint, FText Temp_text_Variable, FText CallFunc_GetEnemyFamilyInfo_Name, class UTexture2D* CallFunc_GetEnemyFamilyInfo_Icon, FLinearColor CallFunc_GetEnemyFamilyInfo_Color, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, const FGuid CallFunc_GetSaveGameID_ReturnValue, int32 CallFunc_GetEnemyKillCount_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, TArray<FDamageTypeDescription>& CallFunc_GetDamageTypeDescriptions_icon, int32 CallFunc_Array_Length_ReturnValue, const FText Temp_text_Variable_1, TArray<FDamageTypeDescription>& CallFunc_GetDamageTypeDescriptions_icon_1, EEnemyFamily Temp_byte_Variable, FText K2Node_Select_Default, FMargin K2Node_MakeStruct_Margin, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UEnemyShowroomController* CallFunc_DisplayEnemy_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UShowroomController* CallFunc_GetController_ReturnValue, FRotator CallFunc_GetShowroomRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FExecuteUbergraph_LoreScreen_CreaturesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class UShowroomController* CallFunc_GetController_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, class ULore_Container_CombatTip_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, FText CallFunc_Array_Get_Item, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

#endif
