#ifndef UE4SS_SDK_BP_GooCannon_GooPuddle_HPP
#define UE4SS_SDK_BP_GooCannon_GooPuddle_HPP

class ABP_GooCannon_GooPuddle_C : public AGooGunPuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UObjectTemperatureComponent* ObjectTemperature;
    class UTerrainDetectComponent* TerrainDetect;
    class UDamageComponent* Damage;
    class UProjectileExplosion* ProjectileExplosion;
    class UNiagaraComponent* Niagara;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* Scene;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    float Timeline_0_Travel_B8070DF14C3D466D9EB0F2B093A50381;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_B8070DF14C3D466D9EB0F2B093A50381;
    class UTimelineComponent* Timeline_0;
    class AGooGun* SuckToActor;
    FTransform InitialSuckToActorTransform;
    bool CanExplode;

    void ExplodePuddle();
    void OnRep_SuckToActor();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnSuckToActor();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void RemovePuddle();
    void BndEvt__ObjectTemperature_K2Node_ComponentBoundEvent_1_OnStartBurning__DelegateSignature();
    void OnGooIgnited();
    void ExecuteUbergraph_BP_GooCannon_GooPuddle(int32 EntryPoint);
};

#endif
