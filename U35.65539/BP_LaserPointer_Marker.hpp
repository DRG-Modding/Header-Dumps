#ifndef UE4SS_SDK_BP_LaserPointer_Marker_HPP
#define UE4SS_SDK_BP_LaserPointer_Marker_HPP

class ABP_LaserPointer_Marker_C : ALaserPointerMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* StaticMesh3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UActorTrackingComponent* ActorTracking;
    UStaticMeshComponent* Sphere;
    USceneComponent* DefaultSceneRoot;
    UOutlineComponent* outline;
    UHealthComponentBase* HealthComponent;

    void UpdateMaterial(TMap<SoftClassProperty, UMaterialInstance*> Map, UPlayerCharacter* Character, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UInventoryList* CallFunc_GetInventoryList_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnDestroyed_Target(AActor* DestroyedActor);
    void OnDestroyed_Self(AActor* DestroyedActor);
    void OnDeath_Event(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_LaserPointer_Marker(int32 EntryPoint, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, AActor* K2Node_CustomEvent_DestroyedActor_1, AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UOutlineComponent* CallFunc_GetComponentByClass_ReturnValue_1);
}

#endif
