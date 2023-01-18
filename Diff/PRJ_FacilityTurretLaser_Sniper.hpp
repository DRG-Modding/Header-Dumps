#ifndef UE4SS_SDK_PRJ_FacilityTurretLaser_Sniper_HPP
#define UE4SS_SDK_PRJ_FacilityTurretLaser_Sniper_HPP

class APRJ_FacilityTurretLaser_Sniper_C : public APRJ_Facility_Laser_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileExplosion* ProjectileExplosion;

    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void ExecuteUbergraph_PRJ_FacilityTurretLaser_Sniper(int32 EntryPoint);
};

#endif
