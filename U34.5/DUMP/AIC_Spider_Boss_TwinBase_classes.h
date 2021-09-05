// BlueprintGeneratedClass AIC_Spider_Boss_TwinBase.AIC_Spider_Boss_TwinBase_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Boss_TwinBase_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)

	void StartSpeedModifier();
	void Recieve_BlackboardValueChanged(FName KeyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AIC_Spider_Boss_TwinBase(int32_t EntryPoint);
};

