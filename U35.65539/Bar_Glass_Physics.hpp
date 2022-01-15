#ifndef UE4SS_SDK_Bar_Glass_Physics_HPP
#define UE4SS_SDK_Bar_Glass_Physics_HPP

class ABar_Glass_Physics_C : ABar_Glass_Physics_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Useable;
    UInstantUsable* InstantUsable;
    UGravityChangedComponent* GravityChanged;
    USphereComponent* Sphere;
    USkeletalMeshComponent* GlassMesh;
    UStaticMeshComponent* StaticMesh;
    bool Thrown;
    TSubclassOf<ADrinkableItem> itemClass;
    APlayerCharacter* CurrentUser;

    void OnRep_Drinkable();
    void OnRep_Thrown();
    void UserConstructionScript();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void PlayKickSound();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void Throw(FVector fromLocation, FRotator NewRotation, AActor* Thrower);
    void ExecuteUbergraph_Bar_Glass_Physics(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool Temp_bool_IsClosed_Variable, FVector CallFunc_MakeVector_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_RandomUnitVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_GetComponentVelocity_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UDrinkableItem* CallFunc_PickupItem_ReturnValue, UITM_BarGlass_Item_C* K2Node_DynamicCast_AsITM_Bar_Glass_Item, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_IsClosed_Variable_1, FVector K2Node_CustomEvent_FromLocation, FRotator K2Node_CustomEvent_NewRotation, AActor* K2Node_CustomEvent_Thrower, FVector CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_GetVelocity_ReturnValue_1, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, FVector Temp_struct_Variable, FVector K2Node_Select_Default, FVector CallFunc_Add_VectorVector_ReturnValue_3);
}

#endif
