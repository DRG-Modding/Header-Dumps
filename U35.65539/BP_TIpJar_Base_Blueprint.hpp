#ifndef UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP
#define UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP

class ABP_TipJar_Base_Blueprint_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBP_TipJarUsable_C* BP_TipJarUsable;
    UParticleSystemComponent* ParticleSystem;
    UWidgetComponent* Widget;
    UBoxComponent* Box;
    USkeletalMeshComponent* SK_TipMachine;
    USceneComponent* DefaultSceneRoot1;
    ASpaceRigBar* BarReference;
    int32 TipAmount;

    void All_PlayTip(UPlayerCharacter* User, int32 AnimIndex);
    void BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TipJar_Base_Blueprint(int32 EntryPoint, int32 Temp_int_Variable, UAnimSequenceBase* Temp_object_Variable, UAnimSequenceBase* Temp_object_Variable_1, UPlayerCharacter* K2Node_CustomEvent_User, int32 K2Node_CustomEvent_AnimIndex, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsValid_ReturnValue, TArray<ASpaceRigBar*>& CallFunc_GetAllActorsOfClass_OutActors, ASpaceRigBar* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UAnimSequenceBase* Temp_object_Variable_2, UAnimSequenceBase* Temp_object_Variable_3, UAnimSequenceBase* Temp_object_Variable_4, UAnimSequenceBase* Temp_object_Variable_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAnimSequenceBase* K2Node_Select_Default, bool CallFunc_IsAnyMontagePlaying_ReturnValue, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue);
}

#endif
