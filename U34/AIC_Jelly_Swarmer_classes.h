// BlueprintGeneratedClass AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_Jelly_Swarmer_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct AENE_Jelly_Passive_Mother_C* Mother; // 0x360(0x08)

	struct AENE_Jelly_Passive_Mother_C* FindNewMother(); // Function AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C.FindNewMother
	void ReceiveBeginPlay(); // Function AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C.ReceiveBeginPlay
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C.ReceivePossess
	void ExecuteUbergraph_AIC_Jelly_Swarmer(int32_t EntryPoint); // Function AIC_Jelly_Swarmer.AIC_Jelly_Swarmer_C.ExecuteUbergraph_AIC_Jelly_Swarmer
};

