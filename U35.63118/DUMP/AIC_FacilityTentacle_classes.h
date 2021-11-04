// BlueprintGeneratedClass AIC_FacilityTentacle.AIC_FacilityTentacle_C
// Size: 0x371 (Inherited: 0x358)
struct AAIC_FacilityTentacle_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	AENE_FacilityTentacle_C* Tentacle; // 0x360(0x08)
	UBehaviorTree* Behavior; // 0x368(0x08)
	bool IsChildOfOtherTentacle; // 0x370(0x01)

	void Recieve_BlackboardValueChanged(FName KeyName);
	void ReceivePossess(APawn* PossessedPawn);
	void SetPaused(bool IsPaused);
	void ExecuteUbergraph_AIC_FacilityTentacle(int32_t EntryPoint);
};

