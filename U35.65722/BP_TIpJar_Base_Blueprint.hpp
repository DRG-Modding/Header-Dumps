#ifndef UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP
#define UE4SS_SDK_BP_TIpJar_Base_Blueprint_HPP

class ABP_TipJar_Base_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_TipJarUsable_C* BP_TipJarUsable;
    class UParticleSystemComponent* ParticleSystem;
    class UWidgetComponent* Widget;
    class UBoxComponent* Box;
    class USkeletalMeshComponent* SK_TipMachine;
    class USceneComponent* DefaultSceneRoot1;
    class ASpaceRigBar* BarReference;
    int32 TipAmount;

    void All_PlayTip(class APlayerCharacter* User, int32 AnimIndex);
    void BndEvt__BP_TipJarUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TipJar_Base_Blueprint(int32 EntryPoint, int32 Temp_int_Variable, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, class APlayerCharacter* K2Node_CustomEvent_User, int32 K2Node_CustomEvent_AnimIndex, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_IsValid_ReturnValue, TArray<class ASpaceRigBar*>& CallFunc_GetAllActorsOfClass_OutActors, class ASpaceRigBar* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAnimSequenceBase* Temp_object_Variable_2, class UAnimSequenceBase* Temp_object_Variable_3, class UAnimSequenceBase* Temp_object_Variable_4, class UAnimSequenceBase* Temp_object_Variable_5, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimSequenceBase* K2Node_Select_Default, bool CallFunc_IsAnyMontagePlaying_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue);
};

#endif
