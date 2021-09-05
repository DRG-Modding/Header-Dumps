// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// Size: 0x141 (Inherited: 0x108)
struct UBP_PassedOut_C : UPassedOutStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	FTransform Start Transform; // 0x110(0x30)
	bool WakeInBed; // 0x140(0x01)

	void AllPassedOut(bool AllPassedOut);
	void ReceiveBeginPlay();
	void BeginFadeToBlack();
	void ReceiveStateEnter();
	void ReceiveStateExit();
	void Turn Off Juke Box();
	void Remove Drinking Mugs();
	void ReceiveTeamPassedOut();
	void ExecuteUbergraph_BP_PassedOut(int32_t EntryPoint);
};

