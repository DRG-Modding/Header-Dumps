#ifndef UE4SS_SDK_EndScreenActorController_HPP
#define UE4SS_SDK_EndScreenActorController_HPP

class UEndScreenActorController_C : UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPlayerTPAnimInstance* AnimInstance;
    float WalkPlayRate;
    ABP_MisComp_FXspawner_C* FX;
    FRandomStream RandomStream;
    TSubclassOf<AActor> AttachmentClass;
    AActor* AttachmentActor;
    float PosePlayRate;
    FTransform SpawnTransfrom;
    bool IsLooping;
    FEndScreenMove ActiveMoveSet;

    void Reset(bool CallFunc_IsValid_ReturnValue);
    void SpawnAttachmentIfNeeded(AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void Cleanup(bool CallFunc_IsValid_ReturnValue);
    void InitFXLights(FTransform SpawnTransform, bool Survived, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABP_MisComp_FXspawner_C* CallFunc_FinishSpawningActor_ReturnValue);
    void RandomAnimElement(TArray<UAnimSequence*>& Array, UAnimSequence*& Output, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, UAnimSequence* CallFunc_Array_Get_Item);
    void ReceiveBeginPlay();
    void Play(UPlayerCharacter* PlayerCharacter, bool SurvivedInPod, FTransform SpawnTransform, const FEndScreenMove ESMoveSet, int32 Seed);
    void PoseFinished(UAnimMontage* Montage, bool bInterrupted);
    void BreakFinished(UAnimMontage* Montage, bool bInterrupted);
    void WalkFinished(UAnimMontage* Montage, bool bInterrupted);
    void PropPoseDone(UAnimMontage* Montage, bool bInterrupted);
    void CustomEvent_0(UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_EndScreenActorController(int32 EntryPoint, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool K2Node_CustomEvent_SurvivedInPod, FTransform K2Node_CustomEvent_SpawnTransform, const FEndScreenMove K2Node_CustomEvent_ESMoveSet, int32 K2Node_CustomEvent_Seed, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, UAnimMontage* K2Node_CustomEvent_Montage_4, bool K2Node_CustomEvent_bInterrupted_4, UAnimMontage* K2Node_CustomEvent_Montage_3, bool K2Node_CustomEvent_bInterrupted_3, UAnimMontage* K2Node_CustomEvent_Montage_2, bool K2Node_CustomEvent_bInterrupted_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAnimMontage* K2Node_CustomEvent_Montage_1, bool K2Node_CustomEvent_bInterrupted_1, OnMontageBlendingOutStartedMCDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_IsValid_ReturnValue_4, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, UAnimSequence* CallFunc_RandomAnimElement_Output, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_5, UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_6);
}

#endif
