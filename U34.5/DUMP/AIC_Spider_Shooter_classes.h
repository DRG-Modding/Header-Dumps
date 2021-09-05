// BlueprintGeneratedClass AIC_Spider_Shooter.AIC_Spider_Shooter_C
// Size: 0x380 (Inherited: 0x374)
struct AAIC_Spider_Shooter_C : AAIC_Spider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)

	void ReceiveBeginPlay();
	void Recieve_BlackboardValueChanged(FName KeyName);
	void ExecuteUbergraph_AIC_Spider_Shooter(int32_t EntryPoint);
};

