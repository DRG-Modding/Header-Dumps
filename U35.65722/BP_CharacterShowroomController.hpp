#ifndef UE4SS_SDK_BP_CharacterShowroomController_HPP
#define UE4SS_SDK_BP_CharacterShowroomController_HPP

class UBP_CharacterShowroomController_C : public UCharacterShowroomController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Receive_CharacterShown();
    void EquipWeapon(EItemCategory Category);
    void ExecuteUbergraph_BP_CharacterShowroomController(int32 EntryPoint, bool CallFunc_K2_SetActorRotation_ReturnValue, EItemCategory K2Node_Event_category, class UCharacterVanityComponent* CallFunc_GetCharacterVanity_ReturnValue, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, class AItem* CallFunc_GetItem_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UItemCharacterAnimationSet* CallFunc_GetCharacterAnimationSet_ReturnValue, const FItemLoadoutAnimations CallFunc_GetLoadoutAnimations_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
};

#endif
