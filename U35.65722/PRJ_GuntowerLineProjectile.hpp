#ifndef UE4SS_SDK_PRJ_GuntowerLineProjectile_HPP
#define UE4SS_SDK_PRJ_GuntowerLineProjectile_HPP

class APRJ_GuntowerLineProjectile_C : public AGuntowerLineProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GunTowerLineProjectile_Cue;
    class UProjectileExplosion* ProjectileExplosion;
    class UParticleSystemComponent* HitparticleSystem;

    void UserConstructionScript(FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1);
    void ReceiveBeginPlay();
    void OnLineDestroy_Event_0(FHitResult Result);
    void ExecuteUbergraph_PRJ_GuntowerLineProjectile(int32 EntryPoint, FExecuteUbergraph_PRJ_GuntowerLineProjectileK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FHitResult K2Node_CustomEvent_result);
};

#endif
