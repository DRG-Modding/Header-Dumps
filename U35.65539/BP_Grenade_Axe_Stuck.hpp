#ifndef UE4SS_SDK_BP_Grenade_Axe_Stuck_HPP
#define UE4SS_SDK_BP_Grenade_Axe_Stuck_HPP

class ABP_Grenade_Axe_Stuck_C : AFSDPhysicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UInstantUsable* InstantUsable;
    UBoxComponent* Blade;
    UBoxComponent* Handle;
    UBoxComponent* WorldCollision;
    USphereComponent* Sphere;
    UStaticMeshComponent* SM_HandGrenade_M_Thrown2;
    AThrownGrenadeItem* AxeGrenadeItem;
    UMaterialInstanceDynamic* Dynamic Material;
    bool StandOnMe;

    void OnRep_StandOnMe();
    void OnRep_AxeGrenadeItem();
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void PickUpAxe(UThrownGrenadeItem* ThrownGrenadeItem);
    void Detach Axe();
    void Attach(AActor* ParentActor, USceneComponent* ParentComponent, FName ParentSocketName, bool CanRetrieve);
    void OnDestroyed_Event(AActor* DestroyedActor);
    void OnDeath_Event(UHealthComponentBase* HealthComponent);
    void GoPhysical(bool PassThrough, bool CanRetrieve);
    void MakeStandable(bool CanRetrieve);
    void SetRetrieval(bool CanRetrieve);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, UThrownGrenadeItem* K2Node_CustomEvent_ThrownGrenadeItem, AActor* K2Node_CustomEvent_ParentActor, USceneComponent* K2Node_CustomEvent_ParentComponent, FName K2Node_CustomEvent_ParentSocketName, bool K2Node_CustomEvent_CanRetrieve_3, InterfaceProperty K2Node_DynamicCast_AsTargetable, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* CallFunc_GetTargetHealthComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, AActor* K2Node_CustomEvent_DestroyedActor, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Has_Been_Initd_Variable_1, UHealthComponentBase* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool K2Node_CustomEvent_PassThrough, bool K2Node_CustomEvent_CanRetrieve_2, bool K2Node_CustomEvent_CanRetrieve_1, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, FVector CallFunc_GetActorUpVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_4, bool K2Node_CustomEvent_CanRetrieve, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool K2Node_ComponentBoundEvent_canUse);
}

#endif
