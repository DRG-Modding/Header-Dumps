#ifndef UE4SS_SDK_WND_ShowroomTest_HPP
#define UE4SS_SDK_WND_ShowroomTest_HPP

class UWND_ShowroomTest_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_216;
    UButton* Button_Character;
    UButton* Button_Grunt;
    UButton* Button_Spitter;
    UButton* Button_Weapon;
    UImage* IMG_Showroom;
    UEnemyShowroomController* EnemyController;
    UCharacterShowroomController* CharacterController;
    EItemCategory Category;
    UEnemyMinersManualData* enemyData;

    void ShowEnemy(UEnemyMinersManualData* enemyData, UEnemyShowroomController* CallFunc_DisplayEnemy_ReturnValue);
    void Construct();
    void BndEvt__Button_153_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_216_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Spitter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_ShowroomTest(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, UCharacterShowroomController* CallFunc_DisplayCharacter_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, UAnimSequenceBase* CallFunc_Array_Get_Item);
}

#endif
