#ifndef UE4SS_SDK_BP_ExplosiveBarrelDispenser_Platform_HPP
#define UE4SS_SDK_BP_ExplosiveBarrelDispenser_Platform_HPP

class ABP_ExplosiveBarrelDispenser_Platform_C : public ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class UWidgetComponent* Widget;
    class UOutlineComponent* outline;
    class UTerrainPlacementComponent* TerrainPlacement1;
    class UChildActorComponent* RightDispenser;
    class UChildActorComponent* BackDispenser;
    class UChildActorComponent* LeftDispenser;
    class UChildActorComponent* ForwardDispenser;
    class UPointLightComponent* PointLight;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* Drill;
    class UAutoCarverComponent* AutoCarver;
    class USkeletalMeshComponent* Base;
    class AGameEvent* OwningEvent;
    float OutlineTime;
    FTimerHandle ResizeCarverTimer;
    bool ChildrenActive;
    bool ActivateOnLanding;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void OnRep_ChildrenActive();
    void SetChildrenReady(bool IsReady);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void OnDropStarted();
    void OnDroppodImpact();
    void DeployAnimations();
    void OnEventFinished(bool eventSuccess);
    void ManageOutlines();
    void OnDroppodCloseToImpact();
    void ReceiveBeginPlay();
    void ResizeCarver();
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform(int32 EntryPoint);
};

#endif
