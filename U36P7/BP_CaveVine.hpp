#ifndef UE4SS_SDK_BP_CaveVine_HPP
#define UE4SS_SDK_BP_CaveVine_HPP

class ABP_CaveVine_C : public ACaveVine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleHealthComponent* SimpleHealth;
    class UMotionAudioController* MotionAudioController;
    class UAudioComponent* CaveVine_Tracking;
    class UAudioComponent* CaveVine_Idle;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* HeadMesh;
    class UStaticMeshComponent* BaseMesh;
    class USphereComponent* SphereCollider;

    void UserConstructionScript();
    void BP_OnInitialized();
    void BP_OnTargetChanged(class UHealthComponent* NewTarget);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaveVine(int32 EntryPoint);
};

#endif
