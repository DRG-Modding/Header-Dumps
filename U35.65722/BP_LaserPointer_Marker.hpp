#ifndef UE4SS_SDK_BP_LaserPointer_Marker_HPP
#define UE4SS_SDK_BP_LaserPointer_Marker_HPP

class ABP_LaserPointer_Marker_C : public ALaserPointerMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UActorTrackingComponent* ActorTracking;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    class UOutlineComponent* outline;
    class UHealthComponentBase* HealthComponent;

    void UpdateMaterial(TMap<class TSoftClassPtr<APlayerCharacter>, class UMaterialInstance*> Map, class APlayerCharacter* Character, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void OnDestroyed_Target(class AActor* DestroyedActor);
    void OnDestroyed_Self(class AActor* DestroyedActor);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_LaserPointer_Marker(int32 EntryPoint, class UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, FExecuteUbergraph_BP_LaserPointer_MarkerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FExecuteUbergraph_BP_LaserPointer_MarkerK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, class AActor* K2Node_CustomEvent_DestroyedActor_1, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_BP_LaserPointer_MarkerK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UOutlineComponent* CallFunc_GetComponentByClass_ReturnValue_1);
};

#endif
