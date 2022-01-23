#ifndef UE4SS_SDK_ITM_BarGlass_Item_HPP
#define UE4SS_SDK_ITM_BarGlass_Item_HPP

class AITM_BarGlass_Item_C : public ADrinkableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* TPParticleSystem;
    class UParticleSystemComponent* ParticleSystem;
    class UAudioComponent* SparkleDrink;
    bool IsFull;
    TSubclassOf<class ABar_Glass_Physics_C> PhysicsActor;
    class UAnimMontage* TPMontage;
    class UAnimMontage* FPMontage;
    bool Visible;
    class ABar_Glass_Physics_C* ThrownGlass;

    void OnRep_ThrownGlass(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnRep_Visible(class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
    void OnRep_IsFull(bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    bool CheckCanSalute(bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void IsDrinking(bool& IsDrinking, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, class UPlayerFPAnimInstance* CallFunc_GetFPAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    float PlayThrow(bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, bool CallFunc_IsFirstPerson_ReturnValue, class UPlayerAnimInstance* CallFunc_GetActiveAnimInstance_ReturnValue, class UAnimMontage* K2Node_Select_Default, float CallFunc_Montage_Play_ReturnValue);
    float PlayDrink(float PlayTime, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, class UPlayerFPAnimInstance* CallFunc_GetFPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1);
    void UserConstructionScript();
    void RecieveStartUsing();
    void Server_Use();
    void All_Drink();
    void All_Throw();
    void SetEmpty();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
    void ReceiveBeginPlay();
    void SkinThrownGlass();
    void ExecuteUbergraph_ITM_BarGlass_Item(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class ABar_Glass_Physics_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_PlayDrink_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_PlayDrink_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, float CallFunc_PlayThrow_ReturnValue, float CallFunc_PlayThrow_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsSaluting_ReturnValue, bool CallFunc_IsSaluting_ReturnValue_1, class UActorComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bReset, TSubclassOf<class AITM_BarGlass_Item_C> CallFunc_GetObjectClass_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FRotator CallFunc_GetBaseAimRotation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
};

#endif
