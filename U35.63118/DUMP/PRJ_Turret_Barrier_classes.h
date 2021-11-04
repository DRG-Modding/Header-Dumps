// BlueprintGeneratedClass PRJ_Turret_Barrier.PRJ_Turret_Barrier_C
// Size: 0x398 (Inherited: 0x390)
struct APRJ_Turret_Barrier_C : APRJ_Facility_Barrier_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)

	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Turret_Barrier(int32_t EntryPoint);
};

