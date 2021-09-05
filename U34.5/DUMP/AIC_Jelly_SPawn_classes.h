// BlueprintGeneratedClass AIC_Jelly_SPawn.AIC_Jelly_Spawn_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Jelly_Spawn_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	AENE_Jelly_Passive_Mother_C* Mother; // 0x360(0x08)

	AENE_Jelly_Passive_Mother_C* FindNewMother();
	void ReceiveBeginPlay();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Jelly_Spawn(int32_t EntryPoint);
};

