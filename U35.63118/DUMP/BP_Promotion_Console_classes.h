// BlueprintGeneratedClass BP_Promotion_Console.BP_Promotion_Console_C
// Size: 0x300 (Inherited: 0x2f0)
struct ABP_Promotion_Console_C : ABP_BaseSpaceRigConsole_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UAudioComponent* Audio; // 0x2f8(0x08)

	void OnOpenConsole(ABP_PlayerController_SpaceRig_C* InPlayerController);
	void ExecuteUbergraph_BP_Promotion_Console(int32_t EntryPoint);
};

