#ifndef UE4SS_SDK_PRJ_MicroMissile_PlasmaBurster_HPP
#define UE4SS_SDK_PRJ_MicroMissile_PlasmaBurster_HPP

class APRJ_MicroMissile_PlasmaBurster_C : public APRJ_MicroMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_HandGrenade_I;
    class UDamageComponent* PenetrationDamage;
    int32 MaxPawnImpacts;
    class USceneComponent* Homing Target;

    void OnPenetrated(bool PredictedPenetration, const FHitResult& HitResult);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_MicroMissile_PlasmaBurster(int32 EntryPoint);
};

#endif
