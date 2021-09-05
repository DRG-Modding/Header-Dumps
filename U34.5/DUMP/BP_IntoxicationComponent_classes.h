// BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C
// Size: 0x148 (Inherited: 0x100)
struct UBP_IntoxicationComponent_C : UCharacterIntoxicationComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	float Seed; // 0x108(0x04)
	float DrunkEffectCoolDown; // 0x10c(0x04)
	float DrunkenMovementNoiseStrength; // 0x110(0x04)
	float DrunkenYawNoiseStrength; // 0x114(0x04)
	float DrunkenPitchNoiseStrength; // 0x118(0x04)
	bool IgnoreMovement; // 0x11c(0x01)
	bool IgnoreYaw; // 0x11d(0x01)
	bool IgnorePitch; // 0x11e(0x01)
	UMaterialInstanceDynamic* DrunkenEffect; // 0x120(0x08)
	FName EffectId; // 0x128(0x08)
	float IntoxicationVisualStrength; // 0x130(0x04)
	float IntoxicationMovementStrength; // 0x134(0x04)
	float DrunkenShoutCoolDown; // 0x138(0x04)
	float ShoutCooldownMax; // 0x13c(0x04)
	float ShoutCooldownMin; // 0x140(0x04)
	float BeginShoutIntoxicationLimit; // 0x144(0x04)

	void ToPercentStr(float Progress, FString PercentString);
	void MyLerp(float Current Value, float Target Value, float Delta Time, float Result);
	void SetPostProcessStrength(float NewStrength);
	int32_t GetAlcoholPct(enum class EDrinkableAlcoholStrength Strength);
	void Lerp Movement Stength(float DeltaTime);
	void Push Effects();
	void Pop Effects(FString DebugReason);
	void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
	void ReceivePassOutDrunk();
	void Lerp Post Process Strength(float DeltaTime);
	void ReceiveDrunkEnd();
	void ReceiveDrunkBegin();
	void ExecuteUbergraph_BP_IntoxicationComponent(int32_t EntryPoint);
};

