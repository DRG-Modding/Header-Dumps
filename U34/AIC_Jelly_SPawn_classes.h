// BlueprintGeneratedClass AIC_Jelly_SPawn.AIC_Jelly_Spawn_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Jelly_Spawn_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct AENE_Jelly_Passive_Mother_C* Mother; // 0x360(0x08)

	struct AENE_Jelly_Passive_Mother_C* FindNewMother(); // Function AIC_Jelly_SPawn.AIC_Jelly_Spawn_C.FindNewMother
	void ReceiveBeginPlay(); // Function AIC_Jelly_SPawn.AIC_Jelly_Spawn_C.ReceiveBeginPlay
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_Jelly_SPawn.AIC_Jelly_Spawn_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Jelly_SPawn.AIC_Jelly_Spawn_C.ReceivePossess
	void ExecuteUbergraph_AIC_Jelly_Spawn(int32_t EntryPoint); // Function AIC_Jelly_SPawn.AIC_Jelly_Spawn_C.ExecuteUbergraph_AIC_Jelly_Spawn
};

