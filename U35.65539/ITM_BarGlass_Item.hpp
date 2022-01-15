#ifndef UE4SS_SDK_ITM_BarGlass_Item_HPP
#define UE4SS_SDK_ITM_BarGlass_Item_HPP

class AITM_BarGlass_Item_C : UDrinkableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* TPParticleSystem;
    UParticleSystemComponent* ParticleSystem;
    UAudioComponent* SparkleDrink;
    bool IsFull;
    TSubclassOf<ABar_Glass_Physics_C> PhysicsActor;
    UAnimMontage* TPMontage;
    UAnimMontage* FPMontage;
    bool Visible;
    ABar_Glass_Physics_C* ThrownGlass;

    void OnRep_ThrownGlass(USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void OnRep_Visible(USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
    void OnRep_IsFull(bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    bool CheckCanSalute(bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void IsDrinking(bool& IsDrinking, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, UPlayerFPAnimInstance* CallFunc_GetFPAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    float PlayThrow(bool Temp_bool_Variable, UAnimMontage* Temp_object_Variable, UAnimMontage* Temp_object_Variable_1, bool CallFunc_IsFirstPerson_ReturnValue, UPlayerAnimInstance* CallFunc_GetActiveAnimInstance_ReturnValue, UAnimMontage* K2Node_Select_Default, float CallFunc_Montage_Play_ReturnValue);
    float PlayDrink(float PlayTime, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, UPlayerFPAnimInstance* CallFunc_GetFPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1);
    void UserConstructionScript();
    void RecieveStartUsing();
    void Server_Use();
    void All_Drink();
    void All_Throw();
    void SetEmpty();
    void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(UActorComponent* Component, bool bReset);
    void ReceiveBeginPlay();
    void SkinThrownGlass();
    void ExecuteUbergraph_ITM_BarGlass_Item(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UBar_Glass_Physics_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_PlayDrink_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_PlayDrink_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, float CallFunc_PlayThrow_ReturnValue, float CallFunc_PlayThrow_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsSaluting_ReturnValue, bool CallFunc_IsSaluting_ReturnValue_1, UActorComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bReset, TSubclassOf<UITM_BarGlass_Item_C> CallFunc_GetObjectClass_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable_1, FRotator CallFunc_GetBaseAimRotation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
}

#endif
