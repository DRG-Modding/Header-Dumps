// BlueprintGeneratedClass PRJ_FacilityTurretLaser_Sniper.PRJ_FacilityTurretLaser_Sniper_C
// Size: 0x388 (Inherited: 0x378)
struct APRJ_FacilityTurretLaser_Sniper_C : APRJ_Facility_Laser_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x380(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_FacilityTurretLaser_Sniper(int32_t EntryPoint);
};

