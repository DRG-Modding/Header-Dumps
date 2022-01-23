#ifndef UE4SS_SDK_WND_ShowroomTest_HPP
#define UE4SS_SDK_WND_ShowroomTest_HPP

class UWND_ShowroomTest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_216;
    class UButton* Button_Character;
    class UButton* Button_Grunt;
    class UButton* Button_Spitter;
    class UButton* Button_Weapon;
    class UImage* IMG_Showroom;
    class UEnemyShowroomController* EnemyController;
    class UCharacterShowroomController* CharacterController;
    EItemCategory Category;
    class UEnemyMinersManualData* enemyData;

    void ShowEnemy(class UEnemyMinersManualData* enemyData, class UEnemyShowroomController* CallFunc_DisplayEnemy_ReturnValue);
    void Construct();
    void BndEvt__Button_153_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_216_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Weapon_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Spitter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_ShowroomTest(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, class UCharacterShowroomController* CallFunc_DisplayCharacter_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, class UAnimSequenceBase* CallFunc_Array_Get_Item);
};

#endif
