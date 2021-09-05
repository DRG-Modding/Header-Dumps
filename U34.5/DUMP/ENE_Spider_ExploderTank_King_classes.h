// BlueprintGeneratedClass ENE_Spider_ExploderTank_King.ENE_Spider_ExploderTank_King_C
// Size: 0x588 (Inherited: 0x570)
struct AENE_Spider_ExploderTank_King_C : AENE_Spider_ExploderTank_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	UPointLightComponent* Light_BackBody2; // 0x578(0x08)
	UPointLightComponent* Light_BackBody1; // 0x580(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_ENE_Spider_ExploderTank_King(int32_t EntryPoint);
};

