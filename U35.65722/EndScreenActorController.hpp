#ifndef UE4SS_SDK_EndScreenActorController_HPP
#define UE4SS_SDK_EndScreenActorController_HPP

class UEndScreenActorController_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPlayerTPAnimInstance* AnimInstance;
    float WalkPlayRate;
    class ABP_MisComp_FXspawner_C* FX;
    FRandomStream RandomStream;
    TSubclassOf<class AActor> AttachmentClass;
    class AActor* AttachmentActor;
    float PosePlayRate;
    FTransform SpawnTransfrom;
    bool IsLooping;
    FEndScreenMove ActiveMoveSet;

    void Reset(bool CallFunc_IsValid_ReturnValue);
    void SpawnAttachmentIfNeeded(class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void Cleanup(bool CallFunc_IsValid_ReturnValue);
    void InitFXLights(FTransform SpawnTransform, bool Survived, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_MisComp_FXspawner_C* CallFunc_FinishSpawningActor_ReturnValue);
    void RandomAnimElement(TArray<class UAnimSequence*>& Array, class UAnimSequence*& Output, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UAnimSequence* CallFunc_Array_Get_Item);
    void ReceiveBeginPlay();
    void Play(class APlayerCharacter* PlayerCharacter, bool SurvivedInPod, FTransform SpawnTransform, const FEndScreenMove ESMoveSet, int32 Seed);
    void PoseFinished(class UAnimMontage* Montage, bool bInterrupted);
    void BreakFinished(class UAnimMontage* Montage, bool bInterrupted);
    void WalkFinished(class UAnimMontage* Montage, bool bInterrupted);
    void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
    void CustomEvent_0(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_EndScreenActorController(int32 EntryPoint, FExecuteUbergraph_EndScreenActorControllerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_EndScreenActorControllerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_EndScreenActorControllerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, bool K2Node_CustomEvent_SurvivedInPod, FTransform K2Node_CustomEvent_SpawnTransform, const FEndScreenMove K2Node_CustomEvent_ESMoveSet, int32 K2Node_CustomEvent_Seed, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage_4, bool K2Node_CustomEvent_bInterrupted_4, class UAnimMontage* K2Node_CustomEvent_Montage_3, bool K2Node_CustomEvent_bInterrupted_3, class UAnimMontage* K2Node_CustomEvent_Montage_2, bool K2Node_CustomEvent_bInterrupted_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_EndScreenActorControllerK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* K2Node_CustomEvent_Montage_1, bool K2Node_CustomEvent_bInterrupted_1, FExecuteUbergraph_EndScreenActorControllerK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_IsValid_ReturnValue_4, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, class UAnimSequence* CallFunc_RandomAnimElement_Output, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_5, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_6);
};

#endif
