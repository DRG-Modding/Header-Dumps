#ifndef UE4SS_SDK_BP_Grenade_Axe_Stuck_HPP
#define UE4SS_SDK_BP_Grenade_Axe_Stuck_HPP

class ABP_Grenade_Axe_Stuck_C : public AFSDPhysicsActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UInstantUsable* InstantUsable;
    class UBoxComponent* Blade;
    class UBoxComponent* Handle;
    class UBoxComponent* WorldCollision;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* SM_HandGrenade_M_Thrown2;
    class AThrownGrenadeItem* AxeGrenadeItem;
    class UMaterialInstanceDynamic* Dynamic Material;
    bool StandOnMe;
    bool SimulateAxePhysics;

    void OnRep_SimulateAxePhysics();
    void OnRep_StandOnMe();
    void OnRep_AxeGrenadeItem();
    void UserConstructionScript();
    void PickUpAxe(class AThrownGrenadeItem* ThrownGrenadeItem);
    void Detach Axe();
    void Attach(class AActor* ParentActor, class USceneComponent* ParentComponent, FName ParentSocketName, bool CanRetrieve);
    void OnDestroyed_Event(class AActor* DestroyedActor);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void GoPhysical(bool PassThrough, bool CanRetrieve);
    void MakeStandable(bool CanRetrieve);
    void SetRetrieval(bool CanRetrieve);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int32 EntryPoint);
};

#endif
