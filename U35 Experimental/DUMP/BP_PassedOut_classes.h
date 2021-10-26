// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// Size: 0x151 (Inherited: 0x110)
struct UBP_PassedOut_C : UPassedOutStateComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	FTransform Start Transform; // 0x120(0x30)
	bool WakeInBed; // 0x150(0x01)

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

