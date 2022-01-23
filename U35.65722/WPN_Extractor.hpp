#ifndef UE4SS_SDK_WPN_Extractor_HPP
#define UE4SS_SDK_WPN_Extractor_HPP

class AWPN_Extractor_C : public AExtractorItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UCapsuleComponent* UsableCapsule;
    class UInstantUsable* PickupUsable;
    bool Attaching;
    FVector ThrowVelocity;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void OnThrown(FVector Direction);
    void RecieveEquipped();
    void RecieveUnequipped();
    void Drop(FVector Impulse, FVector Location);
    void Cheat_Fill();
    void ExecuteUbergraph_WPN_Extractor(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool K2Node_ComponentBoundEvent_canUse, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FVector K2Node_Event_Direction, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, FVector K2Node_CustomEvent_Impulse, FVector K2Node_CustomEvent_Location, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UBoxComponent* CallFunc_GetRootCollider_ReturnValue, class UBoxComponent* CallFunc_GetRootCollider_ReturnValue_1, bool CallFunc_Vector_IsZero_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

#endif
