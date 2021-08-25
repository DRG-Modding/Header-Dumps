// BlueprintGeneratedClass AIC_FlyingSmartRock.AIC_FlyingSmartRock_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_FlyingSmartRock_C : AFSDAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct AENE_Jelly_Passive_Mother_C* Mother; // 0x360(0x08)

	struct AENE_Jelly_Passive_Mother_C* FindNewMother(); // Function AIC_FlyingSmartRock.AIC_FlyingSmartRock_C.FindNewMother
	void ReceiveBeginPlay(); // Function AIC_FlyingSmartRock.AIC_FlyingSmartRock_C.ReceiveBeginPlay
	void OnDeath(struct UHealthComponentBase* HealthComponent); // Function AIC_FlyingSmartRock.AIC_FlyingSmartRock_C.OnDeath
	void ReceivePossess(struct APawn* PossessedPawn); // Function AIC_FlyingSmartRock.AIC_FlyingSmartRock_C.ReceivePossess
	void ExecuteUbergraph_AIC_FlyingSmartRock(int32_t EntryPoint); // Function AIC_FlyingSmartRock.AIC_FlyingSmartRock_C.ExecuteUbergraph_AIC_FlyingSmartRock
};

